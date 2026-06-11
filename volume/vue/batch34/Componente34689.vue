<template>
  <section class="panel-34689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34689");
const base = ref(34689);
const total = computed(() => base.value * 2);

function incrementar34689() {
  base.value++;
}
</script>
