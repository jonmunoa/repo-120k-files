<template>
  <section class="panel-10193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10193");
const base = ref(10193);
const total = computed(() => base.value * 2);

function incrementar10193() {
  base.value++;
}
</script>
