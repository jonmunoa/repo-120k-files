<template>
  <section class="panel-55017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55017");
const base = ref(55017);
const total = computed(() => base.value * 2);

function incrementar55017() {
  base.value++;
}
</script>
