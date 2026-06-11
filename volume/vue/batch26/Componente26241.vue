<template>
  <section class="panel-26241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26241");
const base = ref(26241);
const total = computed(() => base.value * 2);

function incrementar26241() {
  base.value++;
}
</script>
