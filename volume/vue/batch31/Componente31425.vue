<template>
  <section class="panel-31425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31425");
const base = ref(31425);
const total = computed(() => base.value * 2);

function incrementar31425() {
  base.value++;
}
</script>
