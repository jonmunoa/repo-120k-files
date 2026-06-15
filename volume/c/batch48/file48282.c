// fichero 48282 -- macros y constantes -- MODIFICADO
#define LIMITE_48282 48482
#define FACTOR_48282 4

int aplicar_limite48282(int valor) {
    if (valor > LIMITE_48282) return LIMITE_48282;
    return valor * FACTOR_48282;
}
