<template>
  <section class="panel-193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 193");
const base = ref(193);
const total = computed(() => base.value * 2);

function incrementar193() {
  base.value++;
}
</script>
