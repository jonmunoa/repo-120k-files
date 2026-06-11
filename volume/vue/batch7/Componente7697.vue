<template>
  <section class="panel-7697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7697");
const base = ref(7697);
const total = computed(() => base.value * 2);

function incrementar7697() {
  base.value++;
}
</script>
