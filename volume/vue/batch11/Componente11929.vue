<template>
  <section class="panel-11929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11929");
const base = ref(11929);
const total = computed(() => base.value * 2);

function incrementar11929() {
  base.value++;
}
</script>
