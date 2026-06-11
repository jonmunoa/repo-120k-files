<template>
  <section class="panel-53481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53481");
const base = ref(53481);
const total = computed(() => base.value * 2);

function incrementar53481() {
  base.value++;
}
</script>
