<template>
  <section class="panel-19245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19245");
const base = ref(19245);
const total = computed(() => base.value * 2);

function incrementar19245() {
  base.value++;
}
</script>
