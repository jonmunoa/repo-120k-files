<template>
  <section class="panel-7569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7569");
const base = ref(7569);
const total = computed(() => base.value * 2);

function incrementar7569() {
  base.value++;
}
</script>
