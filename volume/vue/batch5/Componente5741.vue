<template>
  <section class="panel-5741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5741");
const base = ref(5741);
const total = computed(() => base.value * 2);

function incrementar5741() {
  base.value++;
}
</script>
