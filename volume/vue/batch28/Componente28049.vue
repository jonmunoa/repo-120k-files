<template>
  <section class="panel-28049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28049");
const base = ref(28049);
const total = computed(() => base.value * 2);

function incrementar28049() {
  base.value++;
}
</script>
