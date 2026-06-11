<template>
  <section class="panel-25129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25129");
const base = ref(25129);
const total = computed(() => base.value * 2);

function incrementar25129() {
  base.value++;
}
</script>
