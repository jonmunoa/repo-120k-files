<template>
  <section class="panel-40429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40429");
const base = ref(40429);
const total = computed(() => base.value * 2);

function incrementar40429() {
  base.value++;
}
</script>
