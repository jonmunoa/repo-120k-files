<template>
  <section class="panel-14233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14233");
const base = ref(14233);
const total = computed(() => base.value * 2);

function incrementar14233() {
  base.value++;
}
</script>
