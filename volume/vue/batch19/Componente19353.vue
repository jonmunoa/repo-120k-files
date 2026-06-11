<template>
  <section class="panel-19353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19353");
const base = ref(19353);
const total = computed(() => base.value * 2);

function incrementar19353() {
  base.value++;
}
</script>
