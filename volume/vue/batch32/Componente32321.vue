<template>
  <section class="panel-32321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32321");
const base = ref(32321);
const total = computed(() => base.value * 2);

function incrementar32321() {
  base.value++;
}
</script>
