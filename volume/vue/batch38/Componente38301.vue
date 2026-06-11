<template>
  <section class="panel-38301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38301");
const base = ref(38301);
const total = computed(() => base.value * 2);

function incrementar38301() {
  base.value++;
}
</script>
