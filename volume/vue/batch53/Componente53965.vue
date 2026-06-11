<template>
  <section class="panel-53965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53965");
const base = ref(53965);
const total = computed(() => base.value * 2);

function incrementar53965() {
  base.value++;
}
</script>
