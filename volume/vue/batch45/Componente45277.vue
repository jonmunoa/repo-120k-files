<template>
  <section class="panel-45277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45277");
const base = ref(45277);
const total = computed(() => base.value * 2);

function incrementar45277() {
  base.value++;
}
</script>
