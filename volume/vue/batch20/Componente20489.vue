<template>
  <section class="panel-20489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20489");
const base = ref(20489);
const total = computed(() => base.value * 2);

function incrementar20489() {
  base.value++;
}
</script>
