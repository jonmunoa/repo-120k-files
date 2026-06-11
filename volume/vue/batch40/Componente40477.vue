<template>
  <section class="panel-40477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40477");
const base = ref(40477);
const total = computed(() => base.value * 2);

function incrementar40477() {
  base.value++;
}
</script>
