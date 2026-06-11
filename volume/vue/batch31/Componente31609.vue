<template>
  <section class="panel-31609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31609");
const base = ref(31609);
const total = computed(() => base.value * 2);

function incrementar31609() {
  base.value++;
}
</script>
