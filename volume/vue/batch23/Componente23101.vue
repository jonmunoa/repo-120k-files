<template>
  <section class="panel-23101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23101");
const base = ref(23101);
const total = computed(() => base.value * 2);

function incrementar23101() {
  base.value++;
}
</script>
