<template>
  <section class="panel-15965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15965");
const base = ref(15965);
const total = computed(() => base.value * 2);

function incrementar15965() {
  base.value++;
}
</script>
