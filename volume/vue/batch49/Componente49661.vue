<template>
  <section class="panel-49661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49661");
const base = ref(49661);
const total = computed(() => base.value * 2);

function incrementar49661() {
  base.value++;
}
</script>
