<template>
  <section class="panel-11901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11901");
const base = ref(11901);
const total = computed(() => base.value * 2);

function incrementar11901() {
  base.value++;
}
</script>
