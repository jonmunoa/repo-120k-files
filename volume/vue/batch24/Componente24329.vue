<template>
  <section class="panel-24329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24329");
const base = ref(24329);
const total = computed(() => base.value * 2);

function incrementar24329() {
  base.value++;
}
</script>
