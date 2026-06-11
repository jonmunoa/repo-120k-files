<template>
  <section class="panel-21445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21445");
const base = ref(21445);
const total = computed(() => base.value * 2);

function incrementar21445() {
  base.value++;
}
</script>
