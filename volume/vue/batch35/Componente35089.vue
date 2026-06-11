<template>
  <section class="panel-35089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35089");
const base = ref(35089);
const total = computed(() => base.value * 2);

function incrementar35089() {
  base.value++;
}
</script>
