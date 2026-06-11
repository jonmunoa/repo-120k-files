<template>
  <section class="panel-35697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35697");
const base = ref(35697);
const total = computed(() => base.value * 2);

function incrementar35697() {
  base.value++;
}
</script>
