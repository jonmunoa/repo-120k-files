<template>
  <section class="panel-45821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45821");
const base = ref(45821);
const total = computed(() => base.value * 2);

function incrementar45821() {
  base.value++;
}
</script>
