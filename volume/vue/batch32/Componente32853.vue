<template>
  <section class="panel-32853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32853");
const base = ref(32853);
const total = computed(() => base.value * 2);

function incrementar32853() {
  base.value++;
}
</script>
