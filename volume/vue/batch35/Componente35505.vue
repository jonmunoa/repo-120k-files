<template>
  <section class="panel-35505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35505");
const base = ref(35505);
const total = computed(() => base.value * 2);

function incrementar35505() {
  base.value++;
}
</script>
