<template>
  <section class="panel-42289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42289");
const base = ref(42289);
const total = computed(() => base.value * 2);

function incrementar42289() {
  base.value++;
}
</script>
