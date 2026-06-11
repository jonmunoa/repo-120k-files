<template>
  <section class="panel-28365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28365");
const base = ref(28365);
const total = computed(() => base.value * 2);

function incrementar28365() {
  base.value++;
}
</script>
