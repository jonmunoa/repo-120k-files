<template>
  <section class="panel-27521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27521");
const base = ref(27521);
const total = computed(() => base.value * 2);

function incrementar27521() {
  base.value++;
}
</script>
