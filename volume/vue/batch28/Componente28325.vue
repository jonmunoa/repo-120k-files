<template>
  <section class="panel-28325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28325");
const base = ref(28325);
const total = computed(() => base.value * 2);

function incrementar28325() {
  base.value++;
}
</script>
