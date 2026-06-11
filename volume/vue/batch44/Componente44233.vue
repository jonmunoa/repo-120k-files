<template>
  <section class="panel-44233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44233");
const base = ref(44233);
const total = computed(() => base.value * 2);

function incrementar44233() {
  base.value++;
}
</script>
