<template>
  <section class="panel-38233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38233");
const base = ref(38233);
const total = computed(() => base.value * 2);

function incrementar38233() {
  base.value++;
}
</script>
