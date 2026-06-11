<template>
  <section class="panel-28809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28809");
const base = ref(28809);
const total = computed(() => base.value * 2);

function incrementar28809() {
  base.value++;
}
</script>
