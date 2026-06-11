<template>
  <section class="panel-41421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41421");
const base = ref(41421);
const total = computed(() => base.value * 2);

function incrementar41421() {
  base.value++;
}
</script>
