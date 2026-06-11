<template>
  <section class="panel-38305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38305");
const base = ref(38305);
const total = computed(() => base.value * 2);

function incrementar38305() {
  base.value++;
}
</script>
