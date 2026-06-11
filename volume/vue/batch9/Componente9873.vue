<template>
  <section class="panel-9873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9873");
const base = ref(9873);
const total = computed(() => base.value * 2);

function incrementar9873() {
  base.value++;
}
</script>
