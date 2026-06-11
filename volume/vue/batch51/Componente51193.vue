<template>
  <section class="panel-51193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51193");
const base = ref(51193);
const total = computed(() => base.value * 2);

function incrementar51193() {
  base.value++;
}
</script>
