<template>
  <section class="panel-53249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53249");
const base = ref(53249);
const total = computed(() => base.value * 2);

function incrementar53249() {
  base.value++;
}
</script>
