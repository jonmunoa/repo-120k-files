<template>
  <section class="panel-43245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43245");
const base = ref(43245);
const total = computed(() => base.value * 2);

function incrementar43245() {
  base.value++;
}
</script>
