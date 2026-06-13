// fichero 34202 -- macros y constantes
#define LIMITE_34202 34302
#define FACTOR_34202 3

int aplicar_limite34202(int valor) {
    if (valor > LIMITE_34202) return LIMITE_34202;
    return valor * FACTOR_34202;
}
