// fichero 19906 -- macros y constantes
#define LIMITE_19906 20006
#define FACTOR_19906 2

int aplicar_limite19906(int valor) {
    if (valor > LIMITE_19906) return LIMITE_19906;
    return valor * FACTOR_19906;
}
