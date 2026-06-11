<template>
  <section class="panel-48941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48941");
const base = ref(48941);
const total = computed(() => base.value * 2);

function incrementar48941() {
  base.value++;
}
</script>
