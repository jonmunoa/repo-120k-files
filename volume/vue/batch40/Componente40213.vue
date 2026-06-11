<template>
  <section class="panel-40213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40213");
const base = ref(40213);
const total = computed(() => base.value * 2);

function incrementar40213() {
  base.value++;
}
</script>
