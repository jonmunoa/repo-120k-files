<template>
  <section class="panel-5185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5185");
const base = ref(5185);
const total = computed(() => base.value * 2);

function incrementar5185() {
  base.value++;
}
</script>
