<template>
  <section class="panel-56065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56065");
const base = ref(56065);
const total = computed(() => base.value * 2);

function incrementar56065() {
  base.value++;
}
</script>
