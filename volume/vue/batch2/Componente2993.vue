<template>
  <section class="panel-2993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2993");
const base = ref(2993);
const total = computed(() => base.value * 2);

function incrementar2993() {
  base.value++;
}
</script>
