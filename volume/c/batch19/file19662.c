// fichero 19662 -- macros y constantes
#define LIMITE_19662 19762
#define FACTOR_19662 3

int aplicar_limite19662(int valor) {
    if (valor > LIMITE_19662) return LIMITE_19662;
    return valor * FACTOR_19662;
}
