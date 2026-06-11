<template>
  <section class="panel-30493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30493");
const base = ref(30493);
const total = computed(() => base.value * 2);

function incrementar30493() {
  base.value++;
}
</script>
