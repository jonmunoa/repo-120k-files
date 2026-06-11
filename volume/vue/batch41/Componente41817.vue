<template>
  <section class="panel-41817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41817");
const base = ref(41817);
const total = computed(() => base.value * 2);

function incrementar41817() {
  base.value++;
}
</script>
