<template>
  <section class="panel-56249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56249");
const base = ref(56249);
const total = computed(() => base.value * 2);

function incrementar56249() {
  base.value++;
}
</script>
