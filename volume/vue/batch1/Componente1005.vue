<template>
  <section class="panel-1005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1005");
const base = ref(1005);
const total = computed(() => base.value * 2);

function incrementar1005() {
  base.value++;
}
</script>
