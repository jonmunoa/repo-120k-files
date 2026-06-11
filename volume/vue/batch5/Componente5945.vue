<template>
  <section class="panel-5945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5945");
const base = ref(5945);
const total = computed(() => base.value * 2);

function incrementar5945() {
  base.value++;
}
</script>
