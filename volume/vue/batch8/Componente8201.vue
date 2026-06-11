<template>
  <section class="panel-8201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8201");
const base = ref(8201);
const total = computed(() => base.value * 2);

function incrementar8201() {
  base.value++;
}
</script>
