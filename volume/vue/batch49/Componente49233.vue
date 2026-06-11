<template>
  <section class="panel-49233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49233");
const base = ref(49233);
const total = computed(() => base.value * 2);

function incrementar49233() {
  base.value++;
}
</script>
