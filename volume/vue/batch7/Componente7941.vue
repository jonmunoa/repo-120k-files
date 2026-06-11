<template>
  <section class="panel-7941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7941");
const base = ref(7941);
const total = computed(() => base.value * 2);

function incrementar7941() {
  base.value++;
}
</script>
