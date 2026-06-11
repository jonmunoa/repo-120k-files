<template>
  <section class="panel-53073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53073");
const base = ref(53073);
const total = computed(() => base.value * 2);

function incrementar53073() {
  base.value++;
}
</script>
