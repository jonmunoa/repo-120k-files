// fichero 13286 -- macros y constantes -- MODIFICADO
#define LIMITE_13286 13486
#define FACTOR_13286 3

int aplicar_limite13286(int valor) {
    if (valor > LIMITE_13286) return LIMITE_13286;
    return valor * FACTOR_13286;
}
