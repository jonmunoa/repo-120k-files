// fichero 24834 -- macros y constantes
#define LIMITE_24834 24934
#define FACTOR_24834 5

int aplicar_limite24834(int valor) {
    if (valor > LIMITE_24834) return LIMITE_24834;
    return valor * FACTOR_24834;
}
