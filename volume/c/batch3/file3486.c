// fichero 3486 -- macros y constantes -- MODIFICADO
#define LIMITE_3486 3686
#define FACTOR_3486 3

int aplicar_limite3486(int valor) {
    if (valor > LIMITE_3486) return LIMITE_3486;
    return valor * FACTOR_3486;
}
