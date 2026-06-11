<template>
  <section class="panel-4009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4009");
const base = ref(4009);
const total = computed(() => base.value * 2);

function incrementar4009() {
  base.value++;
}
</script>
