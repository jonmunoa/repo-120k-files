<template>
  <section class="panel-15193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15193");
const base = ref(15193);
const total = computed(() => base.value * 2);

function incrementar15193() {
  base.value++;
}
</script>
