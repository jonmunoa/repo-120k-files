<template>
  <section class="panel-34901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34901");
const base = ref(34901);
const total = computed(() => base.value * 2);

function incrementar34901() {
  base.value++;
}
</script>
