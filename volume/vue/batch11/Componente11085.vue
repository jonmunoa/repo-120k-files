<template>
  <section class="panel-11085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11085");
const base = ref(11085);
const total = computed(() => base.value * 2);

function incrementar11085() {
  base.value++;
}
</script>
