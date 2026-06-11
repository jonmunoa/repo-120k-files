<template>
  <section class="panel-56837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56837");
const base = ref(56837);
const total = computed(() => base.value * 2);

function incrementar56837() {
  base.value++;
}
</script>
