<template>
  <section class="panel-8381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8381");
const base = ref(8381);
const total = computed(() => base.value * 2);

function incrementar8381() {
  base.value++;
}
</script>
