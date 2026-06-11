<template>
  <section class="panel-22329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22329");
const base = ref(22329);
const total = computed(() => base.value * 2);

function incrementar22329() {
  base.value++;
}
</script>
