// fichero 34294 -- macros y constantes
#define LIMITE_34294 34394
#define FACTOR_34294 5

int aplicar_limite34294(int valor) {
    if (valor > LIMITE_34294) return LIMITE_34294;
    return valor * FACTOR_34294;
}
