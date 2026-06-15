// fichero 5162 -- macros y constantes -- MODIFICADO
#define LIMITE_5162 5362
#define FACTOR_5162 4

int aplicar_limite5162(int valor) {
    if (valor > LIMITE_5162) return LIMITE_5162;
    return valor * FACTOR_5162;
}
