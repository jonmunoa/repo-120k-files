<template>
  <section class="panel-56857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56857");
const base = ref(56857);
const total = computed(() => base.value * 2);

function incrementar56857() {
  base.value++;
}
</script>
