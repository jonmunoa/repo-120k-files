<template>
  <section class="panel-44577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44577");
const base = ref(44577);
const total = computed(() => base.value * 2);

function incrementar44577() {
  base.value++;
}
</script>
