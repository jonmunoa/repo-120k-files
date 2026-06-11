<template>
  <section class="panel-34741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34741");
const base = ref(34741);
const total = computed(() => base.value * 2);

function incrementar34741() {
  base.value++;
}
</script>
