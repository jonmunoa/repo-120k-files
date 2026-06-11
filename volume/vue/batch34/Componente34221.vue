<template>
  <section class="panel-34221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34221");
const base = ref(34221);
const total = computed(() => base.value * 2);

function incrementar34221() {
  base.value++;
}
</script>
