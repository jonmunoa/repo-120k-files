<template>
  <section class="panel-4953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4953");
const base = ref(4953);
const total = computed(() => base.value * 2);

function incrementar4953() {
  base.value++;
}
</script>
