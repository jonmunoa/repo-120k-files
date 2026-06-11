<template>
  <section class="panel-25661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25661");
const base = ref(25661);
const total = computed(() => base.value * 2);

function incrementar25661() {
  base.value++;
}
</script>
