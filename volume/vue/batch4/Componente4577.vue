<template>
  <section class="panel-4577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4577");
const base = ref(4577);
const total = computed(() => base.value * 2);

function incrementar4577() {
  base.value++;
}
</script>
