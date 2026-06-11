<template>
  <section class="panel-28421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28421");
const base = ref(28421);
const total = computed(() => base.value * 2);

function incrementar28421() {
  base.value++;
}
</script>
