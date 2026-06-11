<template>
  <section class="panel-42773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42773");
const base = ref(42773);
const total = computed(() => base.value * 2);

function incrementar42773() {
  base.value++;
}
</script>
