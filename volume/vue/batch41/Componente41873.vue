<template>
  <section class="panel-41873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41873");
const base = ref(41873);
const total = computed(() => base.value * 2);

function incrementar41873() {
  base.value++;
}
</script>
