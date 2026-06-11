<template>
  <section class="panel-41521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41521");
const base = ref(41521);
const total = computed(() => base.value * 2);

function incrementar41521() {
  base.value++;
}
</script>
