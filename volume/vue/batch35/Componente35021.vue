<template>
  <section class="panel-35021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35021");
const base = ref(35021);
const total = computed(() => base.value * 2);

function incrementar35021() {
  base.value++;
}
</script>
