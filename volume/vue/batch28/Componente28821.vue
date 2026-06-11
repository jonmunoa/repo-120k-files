<template>
  <section class="panel-28821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28821");
const base = ref(28821);
const total = computed(() => base.value * 2);

function incrementar28821() {
  base.value++;
}
</script>
