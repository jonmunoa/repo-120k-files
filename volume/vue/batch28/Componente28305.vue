<template>
  <section class="panel-28305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28305");
const base = ref(28305);
const total = computed(() => base.value * 2);

function incrementar28305() {
  base.value++;
}
</script>
