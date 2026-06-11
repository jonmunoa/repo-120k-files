<template>
  <section class="panel-28853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28853");
const base = ref(28853);
const total = computed(() => base.value * 2);

function incrementar28853() {
  base.value++;
}
</script>
