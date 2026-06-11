<template>
  <section class="panel-57389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57389");
const base = ref(57389);
const total = computed(() => base.value * 2);

function incrementar57389() {
  base.value++;
}
</script>
