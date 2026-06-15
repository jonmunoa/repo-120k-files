// fichero 49282 -- macros y constantes -- MODIFICADO
#define LIMITE_49282 49482
#define FACTOR_49282 4

int aplicar_limite49282(int valor) {
    if (valor > LIMITE_49282) return LIMITE_49282;
    return valor * FACTOR_49282;
}
