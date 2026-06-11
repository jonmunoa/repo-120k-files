<template>
  <section class="panel-34569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34569");
const base = ref(34569);
const total = computed(() => base.value * 2);

function incrementar34569() {
  base.value++;
}
</script>
