// fichero 33854 -- macros y constantes
#define LIMITE_33854 33954
#define FACTOR_33854 5

int aplicar_limite33854(int valor) {
    if (valor > LIMITE_33854) return LIMITE_33854;
    return valor * FACTOR_33854;
}
