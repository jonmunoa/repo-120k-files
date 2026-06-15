// fichero 21478 -- macros y constantes -- MODIFICADO
#define LIMITE_21478 21678
#define FACTOR_21478 5

int aplicar_limite21478(int valor) {
    if (valor > LIMITE_21478) return LIMITE_21478;
    return valor * FACTOR_21478;
}
