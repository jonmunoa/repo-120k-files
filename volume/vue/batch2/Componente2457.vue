<template>
  <section class="panel-2457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2457");
const base = ref(2457);
const total = computed(() => base.value * 2);

function incrementar2457() {
  base.value++;
}
</script>
