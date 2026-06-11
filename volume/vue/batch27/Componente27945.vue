<template>
  <section class="panel-27945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27945");
const base = ref(27945);
const total = computed(() => base.value * 2);

function incrementar27945() {
  base.value++;
}
</script>
