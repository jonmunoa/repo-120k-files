<template>
  <section class="panel-47705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47705");
const base = ref(47705);
const total = computed(() => base.value * 2);

function incrementar47705() {
  base.value++;
}
</script>
