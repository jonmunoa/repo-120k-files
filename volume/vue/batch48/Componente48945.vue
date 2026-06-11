<template>
  <section class="panel-48945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48945");
const base = ref(48945);
const total = computed(() => base.value * 2);

function incrementar48945() {
  base.value++;
}
</script>
