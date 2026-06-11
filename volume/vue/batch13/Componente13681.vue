<template>
  <section class="panel-13681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13681");
const base = ref(13681);
const total = computed(() => base.value * 2);

function incrementar13681() {
  base.value++;
}
</script>
