<template>
  <section class="panel-28277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28277");
const base = ref(28277);
const total = computed(() => base.value * 2);

function incrementar28277() {
  base.value++;
}
</script>
