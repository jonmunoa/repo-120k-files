<template>
  <section class="panel-34181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34181");
const base = ref(34181);
const total = computed(() => base.value * 2);

function incrementar34181() {
  base.value++;
}
</script>
