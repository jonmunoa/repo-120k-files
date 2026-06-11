<template>
  <section class="panel-47873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47873");
const base = ref(47873);
const total = computed(() => base.value * 2);

function incrementar47873() {
  base.value++;
}
</script>
