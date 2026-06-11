<template>
  <section class="panel-37553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37553");
const base = ref(37553);
const total = computed(() => base.value * 2);

function incrementar37553() {
  base.value++;
}
</script>
