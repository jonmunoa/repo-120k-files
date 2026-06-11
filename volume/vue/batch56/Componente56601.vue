<template>
  <section class="panel-56601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56601");
const base = ref(56601);
const total = computed(() => base.value * 2);

function incrementar56601() {
  base.value++;
}
</script>
