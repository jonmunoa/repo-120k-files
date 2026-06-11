<template>
  <section class="panel-9741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9741");
const base = ref(9741);
const total = computed(() => base.value * 2);

function incrementar9741() {
  base.value++;
}
</script>
