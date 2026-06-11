<template>
  <section class="panel-51873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51873");
const base = ref(51873);
const total = computed(() => base.value * 2);

function incrementar51873() {
  base.value++;
}
</script>
