<template>
  <section class="panel-17993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17993");
const base = ref(17993);
const total = computed(() => base.value * 2);

function incrementar17993() {
  base.value++;
}
</script>
