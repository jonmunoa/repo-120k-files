<template>
  <section class="panel-55697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55697");
const base = ref(55697);
const total = computed(() => base.value * 2);

function incrementar55697() {
  base.value++;
}
</script>
