<template>
  <section class="panel-10741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10741");
const base = ref(10741);
const total = computed(() => base.value * 2);

function incrementar10741() {
  base.value++;
}
</script>
