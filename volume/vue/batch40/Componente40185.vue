<template>
  <section class="panel-40185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40185");
const base = ref(40185);
const total = computed(() => base.value * 2);

function incrementar40185() {
  base.value++;
}
</script>
