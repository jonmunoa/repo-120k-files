<template>
  <section class="panel-30325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30325");
const base = ref(30325);
const total = computed(() => base.value * 2);

function incrementar30325() {
  base.value++;
}
</script>
