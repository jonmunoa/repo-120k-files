<template>
  <section class="panel-36073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36073");
const base = ref(36073);
const total = computed(() => base.value * 2);

function incrementar36073() {
  base.value++;
}
</script>
