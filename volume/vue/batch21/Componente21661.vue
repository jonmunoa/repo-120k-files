<template>
  <section class="panel-21661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21661");
const base = ref(21661);
const total = computed(() => base.value * 2);

function incrementar21661() {
  base.value++;
}
</script>
