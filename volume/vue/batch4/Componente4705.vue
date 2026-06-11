<template>
  <section class="panel-4705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4705");
const base = ref(4705);
const total = computed(() => base.value * 2);

function incrementar4705() {
  base.value++;
}
</script>
