<template>
  <section class="panel-45545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45545");
const base = ref(45545);
const total = computed(() => base.value * 2);

function incrementar45545() {
  base.value++;
}
</script>
