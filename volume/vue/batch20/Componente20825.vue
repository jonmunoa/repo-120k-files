<template>
  <section class="panel-20825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20825");
const base = ref(20825);
const total = computed(() => base.value * 2);

function incrementar20825() {
  base.value++;
}
</script>
