<template>
  <section class="panel-7969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7969");
const base = ref(7969);
const total = computed(() => base.value * 2);

function incrementar7969() {
  base.value++;
}
</script>
