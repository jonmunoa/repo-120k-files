<template>
  <section class="panel-39253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39253");
const base = ref(39253);
const total = computed(() => base.value * 2);

function incrementar39253() {
  base.value++;
}
</script>
