<template>
  <section class="panel-56993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56993");
const base = ref(56993);
const total = computed(() => base.value * 2);

function incrementar56993() {
  base.value++;
}
</script>
