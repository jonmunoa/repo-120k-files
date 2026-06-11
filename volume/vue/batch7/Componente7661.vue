<template>
  <section class="panel-7661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7661");
const base = ref(7661);
const total = computed(() => base.value * 2);

function incrementar7661() {
  base.value++;
}
</script>
