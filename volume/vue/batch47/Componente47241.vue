<template>
  <section class="panel-47241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47241");
const base = ref(47241);
const total = computed(() => base.value * 2);

function incrementar47241() {
  base.value++;
}
</script>
