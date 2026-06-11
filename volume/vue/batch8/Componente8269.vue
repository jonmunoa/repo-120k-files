<template>
  <section class="panel-8269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8269");
const base = ref(8269);
const total = computed(() => base.value * 2);

function incrementar8269() {
  base.value++;
}
</script>
