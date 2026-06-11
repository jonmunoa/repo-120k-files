<template>
  <section class="panel-36449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36449");
const base = ref(36449);
const total = computed(() => base.value * 2);

function incrementar36449() {
  base.value++;
}
</script>
