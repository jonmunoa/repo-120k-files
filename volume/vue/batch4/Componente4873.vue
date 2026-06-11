<template>
  <section class="panel-4873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4873");
const base = ref(4873);
const total = computed(() => base.value * 2);

function incrementar4873() {
  base.value++;
}
</script>
