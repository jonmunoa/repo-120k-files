<template>
  <section class="panel-12697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12697");
const base = ref(12697);
const total = computed(() => base.value * 2);

function incrementar12697() {
  base.value++;
}
</script>
