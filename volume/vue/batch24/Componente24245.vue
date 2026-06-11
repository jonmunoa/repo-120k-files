<template>
  <section class="panel-24245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24245");
const base = ref(24245);
const total = computed(() => base.value * 2);

function incrementar24245() {
  base.value++;
}
</script>
