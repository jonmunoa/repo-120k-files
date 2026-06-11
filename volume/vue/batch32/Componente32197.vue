<template>
  <section class="panel-32197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32197");
const base = ref(32197);
const total = computed(() => base.value * 2);

function incrementar32197() {
  base.value++;
}
</script>
