<template>
  <section class="panel-51425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51425");
const base = ref(51425);
const total = computed(() => base.value * 2);

function incrementar51425() {
  base.value++;
}
</script>
