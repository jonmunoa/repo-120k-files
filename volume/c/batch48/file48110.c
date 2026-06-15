// fichero 48110 -- macros y constantes -- MODIFICADO
#define LIMITE_48110 48310
#define FACTOR_48110 2

int aplicar_limite48110(int valor) {
    if (valor > LIMITE_48110) return LIMITE_48110;
    return valor * FACTOR_48110;
}
