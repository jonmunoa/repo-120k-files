<template>
  <section class="panel-33721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33721");
const base = ref(33721);
const total = computed(() => base.value * 2);

function incrementar33721() {
  base.value++;
}
</script>
