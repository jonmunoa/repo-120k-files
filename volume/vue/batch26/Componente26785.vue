<template>
  <section class="panel-26785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26785");
const base = ref(26785);
const total = computed(() => base.value * 2);

function incrementar26785() {
  base.value++;
}
</script>
