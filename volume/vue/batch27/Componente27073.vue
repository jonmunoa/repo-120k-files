<template>
  <section class="panel-27073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27073");
const base = ref(27073);
const total = computed(() => base.value * 2);

function incrementar27073() {
  base.value++;
}
</script>
