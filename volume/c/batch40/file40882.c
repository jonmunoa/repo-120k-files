// fichero 40882 -- macros y constantes -- MODIFICADO
#define LIMITE_40882 41082
#define FACTOR_40882 4

int aplicar_limite40882(int valor) {
    if (valor > LIMITE_40882) return LIMITE_40882;
    return valor * FACTOR_40882;
}
