<template>
  <section class="panel-32965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32965");
const base = ref(32965);
const total = computed(() => base.value * 2);

function incrementar32965() {
  base.value++;
}
</script>
