<template>
  <section class="panel-12013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12013");
const base = ref(12013);
const total = computed(() => base.value * 2);

function incrementar12013() {
  base.value++;
}
</script>
