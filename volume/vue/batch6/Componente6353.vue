<template>
  <section class="panel-6353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6353");
const base = ref(6353);
const total = computed(() => base.value * 2);

function incrementar6353() {
  base.value++;
}
</script>
