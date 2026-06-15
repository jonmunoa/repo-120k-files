// fichero 5810 -- macros y constantes -- MODIFICADO
#define LIMITE_5810 6010
#define FACTOR_5810 2

int aplicar_limite5810(int valor) {
    if (valor > LIMITE_5810) return LIMITE_5810;
    return valor * FACTOR_5810;
}
