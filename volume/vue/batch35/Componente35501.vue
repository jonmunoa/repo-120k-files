<template>
  <section class="panel-35501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35501");
const base = ref(35501);
const total = computed(() => base.value * 2);

function incrementar35501() {
  base.value++;
}
</script>
