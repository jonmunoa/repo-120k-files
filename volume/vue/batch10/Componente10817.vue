<template>
  <section class="panel-10817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10817");
const base = ref(10817);
const total = computed(() => base.value * 2);

function incrementar10817() {
  base.value++;
}
</script>
