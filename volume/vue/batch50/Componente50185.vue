<template>
  <section class="panel-50185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50185");
const base = ref(50185);
const total = computed(() => base.value * 2);

function incrementar50185() {
  base.value++;
}
</script>
