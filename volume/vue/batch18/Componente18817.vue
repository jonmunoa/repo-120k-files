<template>
  <section class="panel-18817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18817");
const base = ref(18817);
const total = computed(() => base.value * 2);

function incrementar18817() {
  base.value++;
}
</script>
