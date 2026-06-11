<template>
  <section class="panel-11997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11997");
const base = ref(11997);
const total = computed(() => base.value * 2);

function incrementar11997() {
  base.value++;
}
</script>
