<template>
  <section class="panel-48477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48477");
const base = ref(48477);
const total = computed(() => base.value * 2);

function incrementar48477() {
  base.value++;
}
</script>
