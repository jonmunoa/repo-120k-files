<template>
  <section class="panel-14729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14729");
const base = ref(14729);
const total = computed(() => base.value * 2);

function incrementar14729() {
  base.value++;
}
</script>
