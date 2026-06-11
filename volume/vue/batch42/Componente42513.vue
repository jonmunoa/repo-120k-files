<template>
  <section class="panel-42513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42513");
const base = ref(42513);
const total = computed(() => base.value * 2);

function incrementar42513() {
  base.value++;
}
</script>
