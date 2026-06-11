<template>
  <section class="panel-51457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51457");
const base = ref(51457);
const total = computed(() => base.value * 2);

function incrementar51457() {
  base.value++;
}
</script>
