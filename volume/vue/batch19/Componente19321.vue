<template>
  <section class="panel-19321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19321");
const base = ref(19321);
const total = computed(() => base.value * 2);

function incrementar19321() {
  base.value++;
}
</script>
