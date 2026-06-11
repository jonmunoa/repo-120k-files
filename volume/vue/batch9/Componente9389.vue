<template>
  <section class="panel-9389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9389");
const base = ref(9389);
const total = computed(() => base.value * 2);

function incrementar9389() {
  base.value++;
}
</script>
