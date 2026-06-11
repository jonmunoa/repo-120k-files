<template>
  <section class="panel-2185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2185");
const base = ref(2185);
const total = computed(() => base.value * 2);

function incrementar2185() {
  base.value++;
}
</script>
