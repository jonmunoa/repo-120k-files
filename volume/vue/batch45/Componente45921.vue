<template>
  <section class="panel-45921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45921");
const base = ref(45921);
const total = computed(() => base.value * 2);

function incrementar45921() {
  base.value++;
}
</script>
