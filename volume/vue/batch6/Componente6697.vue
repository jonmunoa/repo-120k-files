<template>
  <section class="panel-6697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6697");
const base = ref(6697);
const total = computed(() => base.value * 2);

function incrementar6697() {
  base.value++;
}
</script>
