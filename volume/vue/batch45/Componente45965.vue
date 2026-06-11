<template>
  <section class="panel-45965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45965");
const base = ref(45965);
const total = computed(() => base.value * 2);

function incrementar45965() {
  base.value++;
}
</script>
