<template>
  <section class="panel-28601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28601");
const base = ref(28601);
const total = computed(() => base.value * 2);

function incrementar28601() {
  base.value++;
}
</script>
