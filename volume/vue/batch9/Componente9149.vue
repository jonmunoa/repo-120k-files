<template>
  <section class="panel-9149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9149");
const base = ref(9149);
const total = computed(() => base.value * 2);

function incrementar9149() {
  base.value++;
}
</script>
