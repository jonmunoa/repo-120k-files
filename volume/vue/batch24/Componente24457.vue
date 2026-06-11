<template>
  <section class="panel-24457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24457");
const base = ref(24457);
const total = computed(() => base.value * 2);

function incrementar24457() {
  base.value++;
}
</script>
