<template>
  <section class="panel-45489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45489");
const base = ref(45489);
const total = computed(() => base.value * 2);

function incrementar45489() {
  base.value++;
}
</script>
