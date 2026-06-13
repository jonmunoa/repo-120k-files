// fichero 29202 -- macros y constantes
#define LIMITE_29202 29302
#define FACTOR_29202 3

int aplicar_limite29202(int valor) {
    if (valor > LIMITE_29202) return LIMITE_29202;
    return valor * FACTOR_29202;
}
