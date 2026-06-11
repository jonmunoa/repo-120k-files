<template>
  <section class="panel-18145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18145");
const base = ref(18145);
const total = computed(() => base.value * 2);

function incrementar18145() {
  base.value++;
}
</script>
