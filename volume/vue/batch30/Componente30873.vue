<template>
  <section class="panel-30873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30873");
const base = ref(30873);
const total = computed(() => base.value * 2);

function incrementar30873() {
  base.value++;
}
</script>
