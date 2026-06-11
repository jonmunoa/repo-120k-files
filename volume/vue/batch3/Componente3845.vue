<template>
  <section class="panel-3845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3845");
const base = ref(3845);
const total = computed(() => base.value * 2);

function incrementar3845() {
  base.value++;
}
</script>
