<template>
  <section class="panel-38889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38889");
const base = ref(38889);
const total = computed(() => base.value * 2);

function incrementar38889() {
  base.value++;
}
</script>
