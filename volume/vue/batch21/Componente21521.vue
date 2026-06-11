<template>
  <section class="panel-21521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21521");
const base = ref(21521);
const total = computed(() => base.value * 2);

function incrementar21521() {
  base.value++;
}
</script>
