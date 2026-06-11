<template>
  <section class="panel-33329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33329");
const base = ref(33329);
const total = computed(() => base.value * 2);

function incrementar33329() {
  base.value++;
}
</script>
