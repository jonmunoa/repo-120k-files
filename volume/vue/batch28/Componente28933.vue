<template>
  <section class="panel-28933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28933");
const base = ref(28933);
const total = computed(() => base.value * 2);

function incrementar28933() {
  base.value++;
}
</script>
