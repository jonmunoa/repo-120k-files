<template>
  <section class="panel-48381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48381");
const base = ref(48381);
const total = computed(() => base.value * 2);

function incrementar48381() {
  base.value++;
}
</script>
