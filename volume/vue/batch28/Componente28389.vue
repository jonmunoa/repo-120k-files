<template>
  <section class="panel-28389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28389");
const base = ref(28389);
const total = computed(() => base.value * 2);

function incrementar28389() {
  base.value++;
}
</script>
