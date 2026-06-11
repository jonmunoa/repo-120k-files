<template>
  <section class="panel-42145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42145");
const base = ref(42145);
const total = computed(() => base.value * 2);

function incrementar42145() {
  base.value++;
}
</script>
