<template>
  <section class="panel-50157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50157");
const base = ref(50157);
const total = computed(() => base.value * 2);

function incrementar50157() {
  base.value++;
}
</script>
