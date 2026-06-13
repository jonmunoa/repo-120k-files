// fichero 34142 -- macros y constantes
#define LIMITE_34142 34242
#define FACTOR_34142 3

int aplicar_limite34142(int valor) {
    if (valor > LIMITE_34142) return LIMITE_34142;
    return valor * FACTOR_34142;
}
