<template>
  <section class="panel-54925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54925");
const base = ref(54925);
const total = computed(() => base.value * 2);

function incrementar54925() {
  base.value++;
}
</script>
