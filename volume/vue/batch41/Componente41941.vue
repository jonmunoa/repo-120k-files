<template>
  <section class="panel-41941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41941");
const base = ref(41941);
const total = computed(() => base.value * 2);

function incrementar41941() {
  base.value++;
}
</script>
