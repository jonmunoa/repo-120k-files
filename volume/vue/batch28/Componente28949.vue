<template>
  <section class="panel-28949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28949");
const base = ref(28949);
const total = computed(() => base.value * 2);

function incrementar28949() {
  base.value++;
}
</script>
