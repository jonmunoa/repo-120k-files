<template>
  <section class="panel-53273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53273");
const base = ref(53273);
const total = computed(() => base.value * 2);

function incrementar53273() {
  base.value++;
}
</script>
