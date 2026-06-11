<template>
  <section class="panel-37013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37013");
const base = ref(37013);
const total = computed(() => base.value * 2);

function incrementar37013() {
  base.value++;
}
</script>
