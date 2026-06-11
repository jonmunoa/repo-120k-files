<template>
  <section class="panel-55741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55741");
const base = ref(55741);
const total = computed(() => base.value * 2);

function incrementar55741() {
  base.value++;
}
</script>
