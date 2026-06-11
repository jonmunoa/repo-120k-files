<template>
  <section class="panel-32933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32933");
const base = ref(32933);
const total = computed(() => base.value * 2);

function incrementar32933() {
  base.value++;
}
</script>
