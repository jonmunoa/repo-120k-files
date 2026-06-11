<template>
  <section class="panel-27953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27953");
const base = ref(27953);
const total = computed(() => base.value * 2);

function incrementar27953() {
  base.value++;
}
</script>
