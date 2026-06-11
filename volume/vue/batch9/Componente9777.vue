<template>
  <section class="panel-9777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9777");
const base = ref(9777);
const total = computed(() => base.value * 2);

function incrementar9777() {
  base.value++;
}
</script>
