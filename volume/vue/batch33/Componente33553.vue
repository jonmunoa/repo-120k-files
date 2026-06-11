<template>
  <section class="panel-33553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33553");
const base = ref(33553);
const total = computed(() => base.value * 2);

function incrementar33553() {
  base.value++;
}
</script>
