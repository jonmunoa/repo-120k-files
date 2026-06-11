<template>
  <section class="panel-33645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33645");
const base = ref(33645);
const total = computed(() => base.value * 2);

function incrementar33645() {
  base.value++;
}
</script>
