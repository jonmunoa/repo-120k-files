<template>
  <section class="panel-31817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31817");
const base = ref(31817);
const total = computed(() => base.value * 2);

function incrementar31817() {
  base.value++;
}
</script>
