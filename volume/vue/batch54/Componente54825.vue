<template>
  <section class="panel-54825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54825");
const base = ref(54825);
const total = computed(() => base.value * 2);

function incrementar54825() {
  base.value++;
}
</script>
