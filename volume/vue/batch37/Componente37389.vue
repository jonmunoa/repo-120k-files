<template>
  <section class="panel-37389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37389");
const base = ref(37389);
const total = computed(() => base.value * 2);

function incrementar37389() {
  base.value++;
}
</script>
