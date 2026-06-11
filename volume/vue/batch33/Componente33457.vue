<template>
  <section class="panel-33457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33457");
const base = ref(33457);
const total = computed(() => base.value * 2);

function incrementar33457() {
  base.value++;
}
</script>
