<template>
  <section class="panel-47185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47185");
const base = ref(47185);
const total = computed(() => base.value * 2);

function incrementar47185() {
  base.value++;
}
</script>
