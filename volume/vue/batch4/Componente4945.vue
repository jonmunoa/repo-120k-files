<template>
  <section class="panel-4945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4945");
const base = ref(4945);
const total = computed(() => base.value * 2);

function incrementar4945() {
  base.value++;
}
</script>
