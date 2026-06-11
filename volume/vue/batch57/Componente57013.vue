<template>
  <section class="panel-57013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57013");
const base = ref(57013);
const total = computed(() => base.value * 2);

function incrementar57013() {
  base.value++;
}
</script>
