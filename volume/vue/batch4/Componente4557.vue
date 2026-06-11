<template>
  <section class="panel-4557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4557");
const base = ref(4557);
const total = computed(() => base.value * 2);

function incrementar4557() {
  base.value++;
}
</script>
