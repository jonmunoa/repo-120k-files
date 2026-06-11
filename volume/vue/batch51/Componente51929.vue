<template>
  <section class="panel-51929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51929");
const base = ref(51929);
const total = computed(() => base.value * 2);

function incrementar51929() {
  base.value++;
}
</script>
