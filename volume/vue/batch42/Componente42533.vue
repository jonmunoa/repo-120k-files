<template>
  <section class="panel-42533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42533");
const base = ref(42533);
const total = computed(() => base.value * 2);

function incrementar42533() {
  base.value++;
}
</script>
