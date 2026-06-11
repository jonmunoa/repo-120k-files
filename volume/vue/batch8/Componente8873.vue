<template>
  <section class="panel-8873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8873");
const base = ref(8873);
const total = computed(() => base.value * 2);

function incrementar8873() {
  base.value++;
}
</script>
