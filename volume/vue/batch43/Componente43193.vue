<template>
  <section class="panel-43193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43193");
const base = ref(43193);
const total = computed(() => base.value * 2);

function incrementar43193() {
  base.value++;
}
</script>
