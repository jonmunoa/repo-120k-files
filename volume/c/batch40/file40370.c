// fichero 40370 -- macros y constantes
#define LIMITE_40370 40470
#define FACTOR_40370 1

int aplicar_limite40370(int valor) {
    if (valor > LIMITE_40370) return LIMITE_40370;
    return valor * FACTOR_40370;
}
