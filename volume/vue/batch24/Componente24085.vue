<template>
  <section class="panel-24085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24085");
const base = ref(24085);
const total = computed(() => base.value * 2);

function incrementar24085() {
  base.value++;
}
</script>
