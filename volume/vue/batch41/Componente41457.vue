<template>
  <section class="panel-41457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41457");
const base = ref(41457);
const total = computed(() => base.value * 2);

function incrementar41457() {
  base.value++;
}
</script>
