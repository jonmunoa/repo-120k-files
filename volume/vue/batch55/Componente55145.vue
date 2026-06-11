<template>
  <section class="panel-55145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55145");
const base = ref(55145);
const total = computed(() => base.value * 2);

function incrementar55145() {
  base.value++;
}
</script>
