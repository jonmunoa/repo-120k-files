<template>
  <section class="panel-25753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25753");
const base = ref(25753);
const total = computed(() => base.value * 2);

function incrementar25753() {
  base.value++;
}
</script>
