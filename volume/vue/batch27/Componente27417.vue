<template>
  <section class="panel-27417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27417");
const base = ref(27417);
const total = computed(() => base.value * 2);

function incrementar27417() {
  base.value++;
}
</script>
