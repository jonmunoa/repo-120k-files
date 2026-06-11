<template>
  <section class="panel-35561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35561");
const base = ref(35561);
const total = computed(() => base.value * 2);

function incrementar35561() {
  base.value++;
}
</script>
