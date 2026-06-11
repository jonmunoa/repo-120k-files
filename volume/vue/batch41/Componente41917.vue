<template>
  <section class="panel-41917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41917");
const base = ref(41917);
const total = computed(() => base.value * 2);

function incrementar41917() {
  base.value++;
}
</script>
