<template>
  <section class="panel-25369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25369");
const base = ref(25369);
const total = computed(() => base.value * 2);

function incrementar25369() {
  base.value++;
}
</script>
