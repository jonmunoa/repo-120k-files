<template>
  <section class="panel-56101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56101");
const base = ref(56101);
const total = computed(() => base.value * 2);

function incrementar56101() {
  base.value++;
}
</script>
