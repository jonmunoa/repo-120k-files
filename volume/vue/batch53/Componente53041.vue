<template>
  <section class="panel-53041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53041");
const base = ref(53041);
const total = computed(() => base.value * 2);

function incrementar53041() {
  base.value++;
}
</script>
