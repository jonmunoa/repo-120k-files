<template>
  <section class="panel-14077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14077");
const base = ref(14077);
const total = computed(() => base.value * 2);

function incrementar14077() {
  base.value++;
}
</script>
