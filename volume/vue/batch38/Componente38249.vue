<template>
  <section class="panel-38249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38249");
const base = ref(38249);
const total = computed(() => base.value * 2);

function incrementar38249() {
  base.value++;
}
</script>
