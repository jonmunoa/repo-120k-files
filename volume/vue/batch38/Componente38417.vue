<template>
  <section class="panel-38417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38417");
const base = ref(38417);
const total = computed(() => base.value * 2);

function incrementar38417() {
  base.value++;
}
</script>
