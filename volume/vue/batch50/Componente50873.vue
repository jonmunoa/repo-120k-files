<template>
  <section class="panel-50873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50873");
const base = ref(50873);
const total = computed(() => base.value * 2);

function incrementar50873() {
  base.value++;
}
</script>
