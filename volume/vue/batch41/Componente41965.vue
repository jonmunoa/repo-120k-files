<template>
  <section class="panel-41965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41965");
const base = ref(41965);
const total = computed(() => base.value * 2);

function incrementar41965() {
  base.value++;
}
</script>
