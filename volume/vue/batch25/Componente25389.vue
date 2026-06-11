<template>
  <section class="panel-25389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25389");
const base = ref(25389);
const total = computed(() => base.value * 2);

function incrementar25389() {
  base.value++;
}
</script>
