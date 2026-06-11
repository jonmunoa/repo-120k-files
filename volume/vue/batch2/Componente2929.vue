<template>
  <section class="panel-2929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2929");
const base = ref(2929);
const total = computed(() => base.value * 2);

function incrementar2929() {
  base.value++;
}
</script>
