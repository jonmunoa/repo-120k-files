// fichero 54994 -- macros y constantes
#define LIMITE_54994 55094
#define FACTOR_54994 5

int aplicar_limite54994(int valor) {
    if (valor > LIMITE_54994) return LIMITE_54994;
    return valor * FACTOR_54994;
}
