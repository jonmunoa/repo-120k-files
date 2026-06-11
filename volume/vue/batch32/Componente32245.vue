<template>
  <section class="panel-32245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32245");
const base = ref(32245);
const total = computed(() => base.value * 2);

function incrementar32245() {
  base.value++;
}
</script>
