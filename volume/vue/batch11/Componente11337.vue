<template>
  <section class="panel-11337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11337");
const base = ref(11337);
const total = computed(() => base.value * 2);

function incrementar11337() {
  base.value++;
}
</script>
