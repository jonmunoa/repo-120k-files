<template>
  <section class="panel-53437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53437");
const base = ref(53437);
const total = computed(() => base.value * 2);

function incrementar53437() {
  base.value++;
}
</script>
