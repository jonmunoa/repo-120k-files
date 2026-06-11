<template>
  <section class="panel-7093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7093");
const base = ref(7093);
const total = computed(() => base.value * 2);

function incrementar7093() {
  base.value++;
}
</script>
