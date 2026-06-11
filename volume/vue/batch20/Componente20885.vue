<template>
  <section class="panel-20885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20885");
const base = ref(20885);
const total = computed(() => base.value * 2);

function incrementar20885() {
  base.value++;
}
</script>
