// fichero 32810 -- macros y constantes -- MODIFICADO
#define LIMITE_32810 33010
#define FACTOR_32810 2

int aplicar_limite32810(int valor) {
    if (valor > LIMITE_32810) return LIMITE_32810;
    return valor * FACTOR_32810;
}
