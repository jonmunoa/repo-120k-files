<template>
  <section class="panel-18521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18521");
const base = ref(18521);
const total = computed(() => base.value * 2);

function incrementar18521() {
  base.value++;
}
</script>
