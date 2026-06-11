<template>
  <section class="panel-35753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35753");
const base = ref(35753);
const total = computed(() => base.value * 2);

function incrementar35753() {
  base.value++;
}
</script>
