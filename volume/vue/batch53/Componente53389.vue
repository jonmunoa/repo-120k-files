<template>
  <section class="panel-53389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53389");
const base = ref(53389);
const total = computed(() => base.value * 2);

function incrementar53389() {
  base.value++;
}
</script>
