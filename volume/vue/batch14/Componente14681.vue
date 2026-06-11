<template>
  <section class="panel-14681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14681");
const base = ref(14681);
const total = computed(() => base.value * 2);

function incrementar14681() {
  base.value++;
}
</script>
