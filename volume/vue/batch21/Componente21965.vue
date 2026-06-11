<template>
  <section class="panel-21965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21965");
const base = ref(21965);
const total = computed(() => base.value * 2);

function incrementar21965() {
  base.value++;
}
</script>
