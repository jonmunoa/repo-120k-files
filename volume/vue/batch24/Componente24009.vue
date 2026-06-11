<template>
  <section class="panel-24009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24009");
const base = ref(24009);
const total = computed(() => base.value * 2);

function incrementar24009() {
  base.value++;
}
</script>
