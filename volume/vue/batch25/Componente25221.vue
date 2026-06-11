<template>
  <section class="panel-25221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25221");
const base = ref(25221);
const total = computed(() => base.value * 2);

function incrementar25221() {
  base.value++;
}
</script>
