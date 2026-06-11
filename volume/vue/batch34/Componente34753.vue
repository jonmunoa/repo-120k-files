<template>
  <section class="panel-34753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34753");
const base = ref(34753);
const total = computed(() => base.value * 2);

function incrementar34753() {
  base.value++;
}
</script>
