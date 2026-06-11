<template>
  <section class="panel-28477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28477");
const base = ref(28477);
const total = computed(() => base.value * 2);

function incrementar28477() {
  base.value++;
}
</script>
