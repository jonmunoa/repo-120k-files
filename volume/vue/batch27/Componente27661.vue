<template>
  <section class="panel-27661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27661");
const base = ref(27661);
const total = computed(() => base.value * 2);

function incrementar27661() {
  base.value++;
}
</script>
