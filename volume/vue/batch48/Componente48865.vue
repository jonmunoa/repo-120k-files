<template>
  <section class="panel-48865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48865");
const base = ref(48865);
const total = computed(() => base.value * 2);

function incrementar48865() {
  base.value++;
}
</script>
