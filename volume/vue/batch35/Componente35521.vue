<template>
  <section class="panel-35521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35521");
const base = ref(35521);
const total = computed(() => base.value * 2);

function incrementar35521() {
  base.value++;
}
</script>
