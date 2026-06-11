<template>
  <section class="panel-48817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48817");
const base = ref(48817);
const total = computed(() => base.value * 2);

function incrementar48817() {
  base.value++;
}
</script>
