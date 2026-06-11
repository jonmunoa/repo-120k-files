<template>
  <section class="panel-21865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21865");
const base = ref(21865);
const total = computed(() => base.value * 2);

function incrementar21865() {
  base.value++;
}
</script>
