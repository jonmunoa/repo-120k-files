// fichero 16810 -- macros y constantes -- MODIFICADO
#define LIMITE_16810 17010
#define FACTOR_16810 2

int aplicar_limite16810(int valor) {
    if (valor > LIMITE_16810) return LIMITE_16810;
    return valor * FACTOR_16810;
}
