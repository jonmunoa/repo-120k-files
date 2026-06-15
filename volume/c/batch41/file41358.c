// fichero 41358 -- macros y constantes -- MODIFICADO
#define LIMITE_41358 41558
#define FACTOR_41358 5

int aplicar_limite41358(int valor) {
    if (valor > LIMITE_41358) return LIMITE_41358;
    return valor * FACTOR_41358;
}
