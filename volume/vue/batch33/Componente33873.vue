<template>
  <section class="panel-33873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33873");
const base = ref(33873);
const total = computed(() => base.value * 2);

function incrementar33873() {
  base.value++;
}
</script>
