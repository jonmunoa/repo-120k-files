<template>
  <section class="panel-19493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19493");
const base = ref(19493);
const total = computed(() => base.value * 2);

function incrementar19493() {
  base.value++;
}
</script>
