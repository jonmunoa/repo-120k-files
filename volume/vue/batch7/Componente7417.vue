<template>
  <section class="panel-7417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7417");
const base = ref(7417);
const total = computed(() => base.value * 2);

function incrementar7417() {
  base.value++;
}
</script>
