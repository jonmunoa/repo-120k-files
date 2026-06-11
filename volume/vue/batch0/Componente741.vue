<template>
  <section class="panel-741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 741");
const base = ref(741);
const total = computed(() => base.value * 2);

function incrementar741() {
  base.value++;
}
</script>
