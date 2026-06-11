<template>
  <section class="panel-25681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25681");
const base = ref(25681);
const total = computed(() => base.value * 2);

function incrementar25681() {
  base.value++;
}
</script>
