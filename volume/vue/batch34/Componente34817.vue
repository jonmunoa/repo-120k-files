<template>
  <section class="panel-34817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34817");
const base = ref(34817);
const total = computed(() => base.value * 2);

function incrementar34817() {
  base.value++;
}
</script>
