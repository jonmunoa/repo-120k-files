<template>
  <section class="panel-53821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53821");
const base = ref(53821);
const total = computed(() => base.value * 2);

function incrementar53821() {
  base.value++;
}
</script>
