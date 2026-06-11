<template>
  <section class="panel-24741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24741");
const base = ref(24741);
const total = computed(() => base.value * 2);

function incrementar24741() {
  base.value++;
}
</script>
