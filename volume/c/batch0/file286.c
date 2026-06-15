// fichero 286 -- macros y constantes -- MODIFICADO
#define LIMITE_286 486
#define FACTOR_286 3

int aplicar_limite286(int valor) {
    if (valor > LIMITE_286) return LIMITE_286;
    return valor * FACTOR_286;
}
