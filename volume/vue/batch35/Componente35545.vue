<template>
  <section class="panel-35545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35545");
const base = ref(35545);
const total = computed(() => base.value * 2);

function incrementar35545() {
  base.value++;
}
</script>
