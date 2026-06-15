// fichero 22358 -- macros y constantes -- MODIFICADO
#define LIMITE_22358 22558
#define FACTOR_22358 5

int aplicar_limite22358(int valor) {
    if (valor > LIMITE_22358) return LIMITE_22358;
    return valor * FACTOR_22358;
}
