<template>
  <section class="panel-33249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33249");
const base = ref(33249);
const total = computed(() => base.value * 2);

function incrementar33249() {
  base.value++;
}
</script>
