<template>
  <section class="panel-28229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28229");
const base = ref(28229);
const total = computed(() => base.value * 2);

function incrementar28229() {
  base.value++;
}
</script>
