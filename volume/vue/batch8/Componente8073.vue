<template>
  <section class="panel-8073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8073");
const base = ref(8073);
const total = computed(() => base.value * 2);

function incrementar8073() {
  base.value++;
}
</script>
