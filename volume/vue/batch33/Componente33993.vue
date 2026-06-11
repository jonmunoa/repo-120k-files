<template>
  <section class="panel-33993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33993");
const base = ref(33993);
const total = computed(() => base.value * 2);

function incrementar33993() {
  base.value++;
}
</script>
