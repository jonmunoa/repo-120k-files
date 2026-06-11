<template>
  <section class="panel-41705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41705");
const base = ref(41705);
const total = computed(() => base.value * 2);

function incrementar41705() {
  base.value++;
}
</script>
