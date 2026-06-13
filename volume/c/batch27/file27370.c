// fichero 27370 -- macros y constantes
#define LIMITE_27370 27470
#define FACTOR_27370 1

int aplicar_limite27370(int valor) {
    if (valor > LIMITE_27370) return LIMITE_27370;
    return valor * FACTOR_27370;
}
