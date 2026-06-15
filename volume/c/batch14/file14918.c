// fichero 14918 -- macros y constantes -- MODIFICADO
#define LIMITE_14918 15118
#define FACTOR_14918 5

int aplicar_limite14918(int valor) {
    if (valor > LIMITE_14918) return LIMITE_14918;
    return valor * FACTOR_14918;
}
