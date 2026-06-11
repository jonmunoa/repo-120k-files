<template>
  <section class="panel-50929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50929");
const base = ref(50929);
const total = computed(() => base.value * 2);

function incrementar50929() {
  base.value++;
}
</script>
