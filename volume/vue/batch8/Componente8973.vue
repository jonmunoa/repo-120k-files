<template>
  <section class="panel-8973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8973");
const base = ref(8973);
const total = computed(() => base.value * 2);

function incrementar8973() {
  base.value++;
}
</script>
