// fichero 25150 -- macros y constantes
#define LIMITE_25150 25250
#define FACTOR_25150 1

int aplicar_limite25150(int valor) {
    if (valor > LIMITE_25150) return LIMITE_25150;
    return valor * FACTOR_25150;
}
