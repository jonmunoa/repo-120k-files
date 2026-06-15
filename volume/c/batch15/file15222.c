// fichero 15222 -- macros y constantes -- MODIFICADO
#define LIMITE_15222 15422
#define FACTOR_15222 4

int aplicar_limite15222(int valor) {
    if (valor > LIMITE_15222) return LIMITE_15222;
    return valor * FACTOR_15222;
}
