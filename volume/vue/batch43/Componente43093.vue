<template>
  <section class="panel-43093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43093");
const base = ref(43093);
const total = computed(() => base.value * 2);

function incrementar43093() {
  base.value++;
}
</script>
