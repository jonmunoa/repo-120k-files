<template>
  <section class="panel-53065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53065");
const base = ref(53065);
const total = computed(() => base.value * 2);

function incrementar53065() {
  base.value++;
}
</script>
