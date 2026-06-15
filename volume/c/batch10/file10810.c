// fichero 10810 -- macros y constantes -- MODIFICADO
#define LIMITE_10810 11010
#define FACTOR_10810 2

int aplicar_limite10810(int valor) {
    if (valor > LIMITE_10810) return LIMITE_10810;
    return valor * FACTOR_10810;
}
