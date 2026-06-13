// fichero 34626 -- macros y constantes
#define LIMITE_34626 34726
#define FACTOR_34626 2

int aplicar_limite34626(int valor) {
    if (valor > LIMITE_34626) return LIMITE_34626;
    return valor * FACTOR_34626;
}
