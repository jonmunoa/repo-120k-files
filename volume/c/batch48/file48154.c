// fichero 48154 -- macros y constantes -- MODIFICADO
#define LIMITE_48154 48354
#define FACTOR_48154 6

int aplicar_limite48154(int valor) {
    if (valor > LIMITE_48154) return LIMITE_48154;
    return valor * FACTOR_48154;
}
