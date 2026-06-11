<template>
  <section class="panel-20945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20945");
const base = ref(20945);
const total = computed(() => base.value * 2);

function incrementar20945() {
  base.value++;
}
</script>
