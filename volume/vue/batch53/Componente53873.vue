<template>
  <section class="panel-53873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53873");
const base = ref(53873);
const total = computed(() => base.value * 2);

function incrementar53873() {
  base.value++;
}
</script>
