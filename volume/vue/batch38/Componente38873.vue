<template>
  <section class="panel-38873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38873");
const base = ref(38873);
const total = computed(() => base.value * 2);

function incrementar38873() {
  base.value++;
}
</script>
