<template>
  <section class="panel-12817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12817");
const base = ref(12817);
const total = computed(() => base.value * 2);

function incrementar12817() {
  base.value++;
}
</script>
