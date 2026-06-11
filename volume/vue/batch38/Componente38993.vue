<template>
  <section class="panel-38993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38993");
const base = ref(38993);
const total = computed(() => base.value * 2);

function incrementar38993() {
  base.value++;
}
</script>
