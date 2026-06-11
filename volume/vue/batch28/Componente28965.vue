<template>
  <section class="panel-28965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28965");
const base = ref(28965);
const total = computed(() => base.value * 2);

function incrementar28965() {
  base.value++;
}
</script>
