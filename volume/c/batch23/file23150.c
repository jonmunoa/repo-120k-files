// fichero 23150 -- macros y constantes -- MODIFICADO
#define LIMITE_23150 23350
#define FACTOR_23150 2

int aplicar_limite23150(int valor) {
    if (valor > LIMITE_23150) return LIMITE_23150;
    return valor * FACTOR_23150;
}
