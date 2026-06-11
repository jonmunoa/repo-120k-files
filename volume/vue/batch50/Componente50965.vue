<template>
  <section class="panel-50965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50965");
const base = ref(50965);
const total = computed(() => base.value * 2);

function incrementar50965() {
  base.value++;
}
</script>
