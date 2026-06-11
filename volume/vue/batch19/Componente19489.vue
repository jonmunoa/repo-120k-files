<template>
  <section class="panel-19489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19489");
const base = ref(19489);
const total = computed(() => base.value * 2);

function incrementar19489() {
  base.value++;
}
</script>
