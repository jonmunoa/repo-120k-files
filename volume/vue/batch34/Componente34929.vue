<template>
  <section class="panel-34929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34929");
const base = ref(34929);
const total = computed(() => base.value * 2);

function incrementar34929() {
  base.value++;
}
</script>
