<template>
  <section class="panel-8105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8105");
const base = ref(8105);
const total = computed(() => base.value * 2);

function incrementar8105() {
  base.value++;
}
</script>
