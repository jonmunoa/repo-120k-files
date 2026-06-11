<template>
  <section class="panel-4133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4133");
const base = ref(4133);
const total = computed(() => base.value * 2);

function incrementar4133() {
  base.value++;
}
</script>
