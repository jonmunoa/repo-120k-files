// fichero 42274 -- macros y constantes -- MODIFICADO
#define LIMITE_42274 42474
#define FACTOR_42274 6

int aplicar_limite42274(int valor) {
    if (valor > LIMITE_42274) return LIMITE_42274;
    return valor * FACTOR_42274;
}
