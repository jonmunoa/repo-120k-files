<template>
  <section class="panel-51697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51697");
const base = ref(51697);
const total = computed(() => base.value * 2);

function incrementar51697() {
  base.value++;
}
</script>
