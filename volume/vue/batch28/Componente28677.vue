<template>
  <section class="panel-28677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28677");
const base = ref(28677);
const total = computed(() => base.value * 2);

function incrementar28677() {
  base.value++;
}
</script>
