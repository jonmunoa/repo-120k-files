<template>
  <section class="panel-53557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53557");
const base = ref(53557);
const total = computed(() => base.value * 2);

function incrementar53557() {
  base.value++;
}
</script>
