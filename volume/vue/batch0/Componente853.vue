<template>
  <section class="panel-853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 853");
const base = ref(853);
const total = computed(() => base.value * 2);

function incrementar853() {
  base.value++;
}
</script>
