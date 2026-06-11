<template>
  <section class="panel-31329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31329");
const base = ref(31329);
const total = computed(() => base.value * 2);

function incrementar31329() {
  base.value++;
}
</script>
