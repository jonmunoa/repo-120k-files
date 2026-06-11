<template>
  <section class="panel-38005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38005");
const base = ref(38005);
const total = computed(() => base.value * 2);

function incrementar38005() {
  base.value++;
}
</script>
