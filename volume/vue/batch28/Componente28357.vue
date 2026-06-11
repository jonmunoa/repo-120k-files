<template>
  <section class="panel-28357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28357");
const base = ref(28357);
const total = computed(() => base.value * 2);

function incrementar28357() {
  base.value++;
}
</script>
