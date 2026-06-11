<template>
  <section class="panel-27221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27221");
const base = ref(27221);
const total = computed(() => base.value * 2);

function incrementar27221() {
  base.value++;
}
</script>
