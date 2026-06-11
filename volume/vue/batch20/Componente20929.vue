<template>
  <section class="panel-20929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20929");
const base = ref(20929);
const total = computed(() => base.value * 2);

function incrementar20929() {
  base.value++;
}
</script>
