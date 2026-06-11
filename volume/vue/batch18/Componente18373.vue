<template>
  <section class="panel-18373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18373");
const base = ref(18373);
const total = computed(() => base.value * 2);

function incrementar18373() {
  base.value++;
}
</script>
