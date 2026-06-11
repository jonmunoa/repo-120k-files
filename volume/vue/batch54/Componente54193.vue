<template>
  <section class="panel-54193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54193");
const base = ref(54193);
const total = computed(() => base.value * 2);

function incrementar54193() {
  base.value++;
}
</script>
