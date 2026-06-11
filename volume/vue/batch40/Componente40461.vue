<template>
  <section class="panel-40461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40461");
const base = ref(40461);
const total = computed(() => base.value * 2);

function incrementar40461() {
  base.value++;
}
</script>
