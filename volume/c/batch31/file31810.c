// fichero 31810 -- macros y constantes -- MODIFICADO
#define LIMITE_31810 32010
#define FACTOR_31810 2

int aplicar_limite31810(int valor) {
    if (valor > LIMITE_31810) return LIMITE_31810;
    return valor * FACTOR_31810;
}
