<template>
  <section class="panel-51553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51553");
const base = ref(51553);
const total = computed(() => base.value * 2);

function incrementar51553() {
  base.value++;
}
</script>
