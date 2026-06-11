<template>
  <section class="panel-40489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40489");
const base = ref(40489);
const total = computed(() => base.value * 2);

function incrementar40489() {
  base.value++;
}
</script>
