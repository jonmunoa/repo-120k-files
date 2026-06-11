<template>
  <section class="panel-56573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56573");
const base = ref(56573);
const total = computed(() => base.value * 2);

function incrementar56573() {
  base.value++;
}
</script>
