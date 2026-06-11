<template>
  <section class="panel-28433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28433");
const base = ref(28433);
const total = computed(() => base.value * 2);

function incrementar28433() {
  base.value++;
}
</script>
