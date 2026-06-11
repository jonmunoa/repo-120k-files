<template>
  <section class="panel-14213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14213");
const base = ref(14213);
const total = computed(() => base.value * 2);

function incrementar14213() {
  base.value++;
}
</script>
