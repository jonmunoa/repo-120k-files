<template>
  <section class="panel-27389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27389");
const base = ref(27389);
const total = computed(() => base.value * 2);

function incrementar27389() {
  base.value++;
}
</script>
