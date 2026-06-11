<template>
  <section class="panel-49973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49973");
const base = ref(49973);
const total = computed(() => base.value * 2);

function incrementar49973() {
  base.value++;
}
</script>
