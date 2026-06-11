<template>
  <section class="panel-28017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28017");
const base = ref(28017);
const total = computed(() => base.value * 2);

function incrementar28017() {
  base.value++;
}
</script>
