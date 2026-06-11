<template>
  <section class="panel-20541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20541");
const base = ref(20541);
const total = computed(() => base.value * 2);

function incrementar20541() {
  base.value++;
}
</script>
