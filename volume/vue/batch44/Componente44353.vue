<template>
  <section class="panel-44353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44353");
const base = ref(44353);
const total = computed(() => base.value * 2);

function incrementar44353() {
  base.value++;
}
</script>
