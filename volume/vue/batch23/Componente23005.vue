<template>
  <section class="panel-23005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23005");
const base = ref(23005);
const total = computed(() => base.value * 2);

function incrementar23005() {
  base.value++;
}
</script>
