<template>
  <section class="panel-38389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38389");
const base = ref(38389);
const total = computed(() => base.value * 2);

function incrementar38389() {
  base.value++;
}
</script>
