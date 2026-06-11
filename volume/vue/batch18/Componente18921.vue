<template>
  <section class="panel-18921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18921");
const base = ref(18921);
const total = computed(() => base.value * 2);

function incrementar18921() {
  base.value++;
}
</script>
