<template>
  <section class="panel-40777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40777");
const base = ref(40777);
const total = computed(() => base.value * 2);

function incrementar40777() {
  base.value++;
}
</script>
