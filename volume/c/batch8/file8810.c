// fichero 8810 -- macros y constantes -- MODIFICADO
#define LIMITE_8810 9010
#define FACTOR_8810 2

int aplicar_limite8810(int valor) {
    if (valor > LIMITE_8810) return LIMITE_8810;
    return valor * FACTOR_8810;
}
