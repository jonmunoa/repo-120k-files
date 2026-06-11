<template>
  <section class="panel-30101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30101");
const base = ref(30101);
const total = computed(() => base.value * 2);

function incrementar30101() {
  base.value++;
}
</script>
