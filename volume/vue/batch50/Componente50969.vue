<template>
  <section class="panel-50969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50969");
const base = ref(50969);
const total = computed(() => base.value * 2);

function incrementar50969() {
  base.value++;
}
</script>
