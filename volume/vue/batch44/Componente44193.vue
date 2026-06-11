<template>
  <section class="panel-44193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44193");
const base = ref(44193);
const total = computed(() => base.value * 2);

function incrementar44193() {
  base.value++;
}
</script>
