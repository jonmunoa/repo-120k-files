<template>
  <section class="panel-38229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38229");
const base = ref(38229);
const total = computed(() => base.value * 2);

function incrementar38229() {
  base.value++;
}
</script>
