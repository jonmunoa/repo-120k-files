<template>
  <section class="panel-48713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48713");
const base = ref(48713);
const total = computed(() => base.value * 2);

function incrementar48713() {
  base.value++;
}
</script>
