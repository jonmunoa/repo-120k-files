<template>
  <section class="panel-38153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38153");
const base = ref(38153);
const total = computed(() => base.value * 2);

function incrementar38153() {
  base.value++;
}
</script>
