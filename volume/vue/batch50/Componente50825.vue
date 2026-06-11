<template>
  <section class="panel-50825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50825");
const base = ref(50825);
const total = computed(() => base.value * 2);

function incrementar50825() {
  base.value++;
}
</script>
