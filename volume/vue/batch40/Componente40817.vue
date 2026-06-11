<template>
  <section class="panel-40817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40817");
const base = ref(40817);
const total = computed(() => base.value * 2);

function incrementar40817() {
  base.value++;
}
</script>
