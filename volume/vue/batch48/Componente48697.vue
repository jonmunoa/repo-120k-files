<template>
  <section class="panel-48697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48697");
const base = ref(48697);
const total = computed(() => base.value * 2);

function incrementar48697() {
  base.value++;
}
</script>
