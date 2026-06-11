<template>
  <section class="panel-33389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33389");
const base = ref(33389);
const total = computed(() => base.value * 2);

function incrementar33389() {
  base.value++;
}
</script>
