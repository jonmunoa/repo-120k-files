<template>
  <section class="panel-36825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36825");
const base = ref(36825);
const total = computed(() => base.value * 2);

function incrementar36825() {
  base.value++;
}
</script>
