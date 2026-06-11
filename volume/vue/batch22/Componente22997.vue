<template>
  <section class="panel-22997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22997");
const base = ref(22997);
const total = computed(() => base.value * 2);

function incrementar22997() {
  base.value++;
}
</script>
