<template>
  <section class="panel-33817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33817");
const base = ref(33817);
const total = computed(() => base.value * 2);

function incrementar33817() {
  base.value++;
}
</script>
