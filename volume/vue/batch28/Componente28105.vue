<template>
  <section class="panel-28105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28105");
const base = ref(28105);
const total = computed(() => base.value * 2);

function incrementar28105() {
  base.value++;
}
</script>
