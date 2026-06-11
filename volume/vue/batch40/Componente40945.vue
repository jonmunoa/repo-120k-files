<template>
  <section class="panel-40945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40945");
const base = ref(40945);
const total = computed(() => base.value * 2);

function incrementar40945() {
  base.value++;
}
</script>
