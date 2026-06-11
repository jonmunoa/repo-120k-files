<template>
  <section class="panel-23353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23353");
const base = ref(23353);
const total = computed(() => base.value * 2);

function incrementar23353() {
  base.value++;
}
</script>
