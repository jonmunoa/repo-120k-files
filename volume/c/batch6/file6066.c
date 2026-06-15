// fichero 6066 -- macros y constantes -- MODIFICADO
#define LIMITE_6066 6266
#define FACTOR_6066 3

int aplicar_limite6066(int valor) {
    if (valor > LIMITE_6066) return LIMITE_6066;
    return valor * FACTOR_6066;
}
