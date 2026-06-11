<template>
  <section class="panel-34565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34565");
const base = ref(34565);
const total = computed(() => base.value * 2);

function incrementar34565() {
  base.value++;
}
</script>
