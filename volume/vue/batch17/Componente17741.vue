<template>
  <section class="panel-17741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17741");
const base = ref(17741);
const total = computed(() => base.value * 2);

function incrementar17741() {
  base.value++;
}
</script>
