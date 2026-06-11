<template>
  <section class="panel-53009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53009");
const base = ref(53009);
const total = computed(() => base.value * 2);

function incrementar53009() {
  base.value++;
}
</script>
