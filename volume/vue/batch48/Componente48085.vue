<template>
  <section class="panel-48085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48085");
const base = ref(48085);
const total = computed(() => base.value * 2);

function incrementar48085() {
  base.value++;
}
</script>
