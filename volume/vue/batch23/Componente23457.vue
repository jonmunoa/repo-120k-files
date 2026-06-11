<template>
  <section class="panel-23457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23457");
const base = ref(23457);
const total = computed(() => base.value * 2);

function incrementar23457() {
  base.value++;
}
</script>
