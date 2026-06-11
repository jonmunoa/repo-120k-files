<template>
  <section class="panel-4941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4941");
const base = ref(4941);
const total = computed(() => base.value * 2);

function incrementar4941() {
  base.value++;
}
</script>
