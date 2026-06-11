<template>
  <section class="panel-34389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34389");
const base = ref(34389);
const total = computed(() => base.value * 2);

function incrementar34389() {
  base.value++;
}
</script>
