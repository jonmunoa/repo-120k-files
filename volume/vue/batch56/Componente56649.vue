<template>
  <section class="panel-56649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56649");
const base = ref(56649);
const total = computed(() => base.value * 2);

function incrementar56649() {
  base.value++;
}
</script>
