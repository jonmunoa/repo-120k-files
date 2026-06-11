<template>
  <section class="panel-25769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25769");
const base = ref(25769);
const total = computed(() => base.value * 2);

function incrementar25769() {
  base.value++;
}
</script>
