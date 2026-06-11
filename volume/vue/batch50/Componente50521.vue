<template>
  <section class="panel-50521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50521");
const base = ref(50521);
const total = computed(() => base.value * 2);

function incrementar50521() {
  base.value++;
}
</script>
