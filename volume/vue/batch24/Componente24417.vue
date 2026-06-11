<template>
  <section class="panel-24417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24417");
const base = ref(24417);
const total = computed(() => base.value * 2);

function incrementar24417() {
  base.value++;
}
</script>
