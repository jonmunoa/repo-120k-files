<template>
  <section class="panel-47225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47225");
const base = ref(47225);
const total = computed(() => base.value * 2);

function incrementar47225() {
  base.value++;
}
</script>
