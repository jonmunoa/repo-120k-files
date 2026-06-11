<template>
  <section class="panel-2321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2321");
const base = ref(2321);
const total = computed(() => base.value * 2);

function incrementar2321() {
  base.value++;
}
</script>
