<template>
  <section class="panel-14817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14817");
const base = ref(14817);
const total = computed(() => base.value * 2);

function incrementar14817() {
  base.value++;
}
</script>
