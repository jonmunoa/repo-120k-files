<template>
  <section class="panel-33657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33657");
const base = ref(33657);
const total = computed(() => base.value * 2);

function incrementar33657() {
  base.value++;
}
</script>
