<template>
  <section class="panel-38021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38021");
const base = ref(38021);
const total = computed(() => base.value * 2);

function incrementar38021() {
  base.value++;
}
</script>
