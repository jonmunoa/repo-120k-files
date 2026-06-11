<template>
  <section class="panel-51361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51361");
const base = ref(51361);
const total = computed(() => base.value * 2);

function incrementar51361() {
  base.value++;
}
</script>
