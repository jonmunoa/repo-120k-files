<template>
  <section class="panel-8801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8801");
const base = ref(8801);
const total = computed(() => base.value * 2);

function incrementar8801() {
  base.value++;
}
</script>
