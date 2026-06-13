// fichero 34558 -- macros y constantes
#define LIMITE_34558 34658
#define FACTOR_34558 4

int aplicar_limite34558(int valor) {
    if (valor > LIMITE_34558) return LIMITE_34558;
    return valor * FACTOR_34558;
}
