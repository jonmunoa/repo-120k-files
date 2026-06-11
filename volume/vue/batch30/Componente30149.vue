<template>
  <section class="panel-30149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30149");
const base = ref(30149);
const total = computed(() => base.value * 2);

function incrementar30149() {
  base.value++;
}
</script>
