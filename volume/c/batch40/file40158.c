// fichero 40158 -- macros y constantes -- MODIFICADO
#define LIMITE_40158 40358
#define FACTOR_40158 5

int aplicar_limite40158(int valor) {
    if (valor > LIMITE_40158) return LIMITE_40158;
    return valor * FACTOR_40158;
}
