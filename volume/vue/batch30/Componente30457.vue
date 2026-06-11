<template>
  <section class="panel-30457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30457");
const base = ref(30457);
const total = computed(() => base.value * 2);

function incrementar30457() {
  base.value++;
}
</script>
