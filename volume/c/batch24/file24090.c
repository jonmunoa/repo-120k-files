// fichero 24090 -- macros y constantes
#define LIMITE_24090 24190
#define FACTOR_24090 1

int aplicar_limite24090(int valor) {
    if (valor > LIMITE_24090) return LIMITE_24090;
    return valor * FACTOR_24090;
}
