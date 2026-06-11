<template>
  <section class="panel-27509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27509");
const base = ref(27509);
const total = computed(() => base.value * 2);

function incrementar27509() {
  base.value++;
}
</script>
