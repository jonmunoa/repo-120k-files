// fichero 38282 -- macros y constantes -- MODIFICADO
#define LIMITE_38282 38482
#define FACTOR_38282 4

int aplicar_limite38282(int valor) {
    if (valor > LIMITE_38282) return LIMITE_38282;
    return valor * FACTOR_38282;
}
