<template>
  <section class="panel-49377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49377");
const base = ref(49377);
const total = computed(() => base.value * 2);

function incrementar49377() {
  base.value++;
}
</script>
