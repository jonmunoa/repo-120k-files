<template>
  <section class="panel-4277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4277");
const base = ref(4277);
const total = computed(() => base.value * 2);

function incrementar4277() {
  base.value++;
}
</script>
