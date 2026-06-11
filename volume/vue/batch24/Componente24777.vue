<template>
  <section class="panel-24777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24777");
const base = ref(24777);
const total = computed(() => base.value * 2);

function incrementar24777() {
  base.value++;
}
</script>
