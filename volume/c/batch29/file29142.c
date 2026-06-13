// fichero 29142 -- macros y constantes
#define LIMITE_29142 29242
#define FACTOR_29142 3

int aplicar_limite29142(int valor) {
    if (valor > LIMITE_29142) return LIMITE_29142;
    return valor * FACTOR_29142;
}
