<template>
  <section class="panel-55457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55457");
const base = ref(55457);
const total = computed(() => base.value * 2);

function incrementar55457() {
  base.value++;
}
</script>
