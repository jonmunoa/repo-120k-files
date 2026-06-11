<template>
  <section class="panel-14749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14749");
const base = ref(14749);
const total = computed(() => base.value * 2);

function incrementar14749() {
  base.value++;
}
</script>
