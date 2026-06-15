// fichero 15810 -- macros y constantes -- MODIFICADO
#define LIMITE_15810 16010
#define FACTOR_15810 2

int aplicar_limite15810(int valor) {
    if (valor > LIMITE_15810) return LIMITE_15810;
    return valor * FACTOR_15810;
}
