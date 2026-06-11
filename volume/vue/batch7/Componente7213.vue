<template>
  <section class="panel-7213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7213");
const base = ref(7213);
const total = computed(() => base.value * 2);

function incrementar7213() {
  base.value++;
}
</script>
