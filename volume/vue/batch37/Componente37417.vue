<template>
  <section class="panel-37417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37417");
const base = ref(37417);
const total = computed(() => base.value * 2);

function incrementar37417() {
  base.value++;
}
</script>
