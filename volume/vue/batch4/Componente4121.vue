<template>
  <section class="panel-4121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4121");
const base = ref(4121);
const total = computed(() => base.value * 2);

function incrementar4121() {
  base.value++;
}
</script>
