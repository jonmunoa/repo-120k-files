// fichero 29494 -- macros y constantes -- MODIFICADO
#define LIMITE_29494 29694
#define FACTOR_29494 6

int aplicar_limite29494(int valor) {
    if (valor > LIMITE_29494) return LIMITE_29494;
    return valor * FACTOR_29494;
}
