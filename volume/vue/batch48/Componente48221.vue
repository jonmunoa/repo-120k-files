<template>
  <section class="panel-48221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48221");
const base = ref(48221);
const total = computed(() => base.value * 2);

function incrementar48221() {
  base.value++;
}
</script>
