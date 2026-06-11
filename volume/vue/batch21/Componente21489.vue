<template>
  <section class="panel-21489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21489");
const base = ref(21489);
const total = computed(() => base.value * 2);

function incrementar21489() {
  base.value++;
}
</script>
