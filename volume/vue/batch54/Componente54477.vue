<template>
  <section class="panel-54477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54477");
const base = ref(54477);
const total = computed(() => base.value * 2);

function incrementar54477() {
  base.value++;
}
</script>
