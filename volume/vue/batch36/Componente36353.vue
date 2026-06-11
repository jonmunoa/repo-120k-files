<template>
  <section class="panel-36353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36353");
const base = ref(36353);
const total = computed(() => base.value * 2);

function incrementar36353() {
  base.value++;
}
</script>
