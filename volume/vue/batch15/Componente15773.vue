<template>
  <section class="panel-15773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15773");
const base = ref(15773);
const total = computed(() => base.value * 2);

function incrementar15773() {
  base.value++;
}
</script>
