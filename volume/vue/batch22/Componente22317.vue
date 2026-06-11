<template>
  <section class="panel-22317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22317");
const base = ref(22317);
const total = computed(() => base.value * 2);

function incrementar22317() {
  base.value++;
}
</script>
