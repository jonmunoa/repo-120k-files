<template>
  <section class="panel-34661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34661");
const base = ref(34661);
const total = computed(() => base.value * 2);

function incrementar34661() {
  base.value++;
}
</script>
