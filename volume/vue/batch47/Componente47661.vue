<template>
  <section class="panel-47661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47661");
const base = ref(47661);
const total = computed(() => base.value * 2);

function incrementar47661() {
  base.value++;
}
</script>
