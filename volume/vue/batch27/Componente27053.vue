<template>
  <section class="panel-27053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27053");
const base = ref(27053);
const total = computed(() => base.value * 2);

function incrementar27053() {
  base.value++;
}
</script>
