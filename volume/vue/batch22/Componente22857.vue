<template>
  <section class="panel-22857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22857");
const base = ref(22857);
const total = computed(() => base.value * 2);

function incrementar22857() {
  base.value++;
}
</script>
