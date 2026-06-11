<template>
  <section class="panel-53853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53853");
const base = ref(53853);
const total = computed(() => base.value * 2);

function incrementar53853() {
  base.value++;
}
</script>
