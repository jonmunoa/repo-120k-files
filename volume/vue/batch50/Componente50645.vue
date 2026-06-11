<template>
  <section class="panel-50645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50645");
const base = ref(50645);
const total = computed(() => base.value * 2);

function incrementar50645() {
  base.value++;
}
</script>
