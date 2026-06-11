<template>
  <section class="panel-8005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8005");
const base = ref(8005);
const total = computed(() => base.value * 2);

function incrementar8005() {
  base.value++;
}
</script>
