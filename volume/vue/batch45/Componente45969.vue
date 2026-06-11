<template>
  <section class="panel-45969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45969");
const base = ref(45969);
const total = computed(() => base.value * 2);

function incrementar45969() {
  base.value++;
}
</script>
