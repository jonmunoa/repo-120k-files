<template>
  <section class="panel-42973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42973");
const base = ref(42973);
const total = computed(() => base.value * 2);

function incrementar42973() {
  base.value++;
}
</script>
