<template>
  <section class="panel-31489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31489");
const base = ref(31489);
const total = computed(() => base.value * 2);

function incrementar31489() {
  base.value++;
}
</script>
