<template>
  <section class="panel-15897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15897");
const base = ref(15897);
const total = computed(() => base.value * 2);

function incrementar15897() {
  base.value++;
}
</script>
