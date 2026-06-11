<template>
  <section class="panel-39817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39817");
const base = ref(39817);
const total = computed(() => base.value * 2);

function incrementar39817() {
  base.value++;
}
</script>
