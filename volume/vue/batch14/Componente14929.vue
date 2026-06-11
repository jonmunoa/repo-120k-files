<template>
  <section class="panel-14929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14929");
const base = ref(14929);
const total = computed(() => base.value * 2);

function incrementar14929() {
  base.value++;
}
</script>
