<template>
  <section class="panel-55005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55005");
const base = ref(55005);
const total = computed(() => base.value * 2);

function incrementar55005() {
  base.value++;
}
</script>
