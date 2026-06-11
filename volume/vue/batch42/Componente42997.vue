<template>
  <section class="panel-42997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42997");
const base = ref(42997);
const total = computed(() => base.value * 2);

function incrementar42997() {
  base.value++;
}
</script>
