<template>
  <section class="panel-55685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55685");
const base = ref(55685);
const total = computed(() => base.value * 2);

function incrementar55685() {
  base.value++;
}
</script>
