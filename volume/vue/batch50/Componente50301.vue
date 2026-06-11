<template>
  <section class="panel-50301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50301");
const base = ref(50301);
const total = computed(() => base.value * 2);

function incrementar50301() {
  base.value++;
}
</script>
