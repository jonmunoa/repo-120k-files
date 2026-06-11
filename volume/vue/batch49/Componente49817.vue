<template>
  <section class="panel-49817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49817");
const base = ref(49817);
const total = computed(() => base.value * 2);

function incrementar49817() {
  base.value++;
}
</script>
