<template>
  <section class="panel-42457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42457");
const base = ref(42457);
const total = computed(() => base.value * 2);

function incrementar42457() {
  base.value++;
}
</script>
