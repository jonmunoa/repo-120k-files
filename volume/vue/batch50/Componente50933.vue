<template>
  <section class="panel-50933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50933");
const base = ref(50933);
const total = computed(() => base.value * 2);

function incrementar50933() {
  base.value++;
}
</script>
