<template>
  <section class="panel-50997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50997");
const base = ref(50997);
const total = computed(() => base.value * 2);

function incrementar50997() {
  base.value++;
}
</script>
