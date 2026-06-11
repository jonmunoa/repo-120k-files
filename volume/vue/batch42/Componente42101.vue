<template>
  <section class="panel-42101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42101");
const base = ref(42101);
const total = computed(() => base.value * 2);

function incrementar42101() {
  base.value++;
}
</script>
