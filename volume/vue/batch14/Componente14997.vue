<template>
  <section class="panel-14997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14997");
const base = ref(14997);
const total = computed(() => base.value * 2);

function incrementar14997() {
  base.value++;
}
</script>
