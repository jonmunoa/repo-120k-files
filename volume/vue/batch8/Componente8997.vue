<template>
  <section class="panel-8997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8997");
const base = ref(8997);
const total = computed(() => base.value * 2);

function incrementar8997() {
  base.value++;
}
</script>
