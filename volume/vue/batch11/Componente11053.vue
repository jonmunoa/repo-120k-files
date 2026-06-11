<template>
  <section class="panel-11053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11053");
const base = ref(11053);
const total = computed(() => base.value * 2);

function incrementar11053() {
  base.value++;
}
</script>
