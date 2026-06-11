<template>
  <section class="panel-51417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51417");
const base = ref(51417);
const total = computed(() => base.value * 2);

function incrementar51417() {
  base.value++;
}
</script>
