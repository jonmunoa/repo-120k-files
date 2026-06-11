<template>
  <section class="panel-23105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23105");
const base = ref(23105);
const total = computed(() => base.value * 2);

function incrementar23105() {
  base.value++;
}
</script>
