<template>
  <section class="panel-40901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40901");
const base = ref(40901);
const total = computed(() => base.value * 2);

function incrementar40901() {
  base.value++;
}
</script>
