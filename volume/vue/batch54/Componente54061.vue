<template>
  <section class="panel-54061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54061");
const base = ref(54061);
const total = computed(() => base.value * 2);

function incrementar54061() {
  base.value++;
}
</script>
