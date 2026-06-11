<template>
  <section class="panel-45321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45321");
const base = ref(45321);
const total = computed(() => base.value * 2);

function incrementar45321() {
  base.value++;
}
</script>
