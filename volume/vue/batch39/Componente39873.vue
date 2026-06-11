<template>
  <section class="panel-39873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39873");
const base = ref(39873);
const total = computed(() => base.value * 2);

function incrementar39873() {
  base.value++;
}
</script>
