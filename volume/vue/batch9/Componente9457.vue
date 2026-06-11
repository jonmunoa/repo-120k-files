<template>
  <section class="panel-9457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9457");
const base = ref(9457);
const total = computed(() => base.value * 2);

function incrementar9457() {
  base.value++;
}
</script>
