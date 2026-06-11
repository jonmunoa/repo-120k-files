<template>
  <section class="panel-28065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28065");
const base = ref(28065);
const total = computed(() => base.value * 2);

function incrementar28065() {
  base.value++;
}
</script>
