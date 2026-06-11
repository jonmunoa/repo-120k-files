<template>
  <section class="panel-50417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50417");
const base = ref(50417);
const total = computed(() => base.value * 2);

function incrementar50417() {
  base.value++;
}
</script>
