<template>
  <section class="panel-55661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55661");
const base = ref(55661);
const total = computed(() => base.value * 2);

function incrementar55661() {
  base.value++;
}
</script>
