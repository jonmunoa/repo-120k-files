<template>
  <section class="panel-40221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40221");
const base = ref(40221);
const total = computed(() => base.value * 2);

function incrementar40221() {
  base.value++;
}
</script>
