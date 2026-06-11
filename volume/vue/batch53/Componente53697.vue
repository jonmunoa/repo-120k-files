<template>
  <section class="panel-53697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53697");
const base = ref(53697);
const total = computed(() => base.value * 2);

function incrementar53697() {
  base.value++;
}
</script>
