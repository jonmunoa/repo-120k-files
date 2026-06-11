<template>
  <section class="panel-17697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17697");
const base = ref(17697);
const total = computed(() => base.value * 2);

function incrementar17697() {
  base.value++;
}
</script>
