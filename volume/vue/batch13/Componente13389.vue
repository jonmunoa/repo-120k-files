<template>
  <section class="panel-13389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13389");
const base = ref(13389);
const total = computed(() => base.value * 2);

function incrementar13389() {
  base.value++;
}
</script>
