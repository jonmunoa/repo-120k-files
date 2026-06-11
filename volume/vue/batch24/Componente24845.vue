<template>
  <section class="panel-24845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24845");
const base = ref(24845);
const total = computed(() => base.value * 2);

function incrementar24845() {
  base.value++;
}
</script>
