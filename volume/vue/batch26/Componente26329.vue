<template>
  <section class="panel-26329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26329");
const base = ref(26329);
const total = computed(() => base.value * 2);

function incrementar26329() {
  base.value++;
}
</script>
