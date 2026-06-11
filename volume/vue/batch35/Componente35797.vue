<template>
  <section class="panel-35797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35797");
const base = ref(35797);
const total = computed(() => base.value * 2);

function incrementar35797() {
  base.value++;
}
</script>
