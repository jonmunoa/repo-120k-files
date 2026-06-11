<template>
  <section class="panel-55777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55777");
const base = ref(55777);
const total = computed(() => base.value * 2);

function incrementar55777() {
  base.value++;
}
</script>
