// fichero 40210 -- macros y constantes -- MODIFICADO
#define LIMITE_40210 40410
#define FACTOR_40210 2

int aplicar_limite40210(int valor) {
    if (valor > LIMITE_40210) return LIMITE_40210;
    return valor * FACTOR_40210;
}
