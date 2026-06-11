<template>
  <section class="panel-49417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49417");
const base = ref(49417);
const total = computed(() => base.value * 2);

function incrementar49417() {
  base.value++;
}
</script>
