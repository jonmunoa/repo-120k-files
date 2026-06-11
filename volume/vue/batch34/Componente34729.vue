<template>
  <section class="panel-34729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34729");
const base = ref(34729);
const total = computed(() => base.value * 2);

function incrementar34729() {
  base.value++;
}
</script>
