<template>
  <section class="panel-30353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30353");
const base = ref(30353);
const total = computed(() => base.value * 2);

function incrementar30353() {
  base.value++;
}
</script>
