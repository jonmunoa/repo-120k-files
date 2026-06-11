<template>
  <section class="panel-35761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35761");
const base = ref(35761);
const total = computed(() => base.value * 2);

function incrementar35761() {
  base.value++;
}
</script>
