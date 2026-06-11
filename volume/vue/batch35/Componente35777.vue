<template>
  <section class="panel-35777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35777");
const base = ref(35777);
const total = computed(() => base.value * 2);

function incrementar35777() {
  base.value++;
}
</script>
