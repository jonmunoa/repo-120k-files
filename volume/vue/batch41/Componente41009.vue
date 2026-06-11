<template>
  <section class="panel-41009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41009");
const base = ref(41009);
const total = computed(() => base.value * 2);

function incrementar41009() {
  base.value++;
}
</script>
