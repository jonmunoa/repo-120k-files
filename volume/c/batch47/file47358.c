// fichero 47358 -- macros y constantes -- MODIFICADO
#define LIMITE_47358 47558
#define FACTOR_47358 5

int aplicar_limite47358(int valor) {
    if (valor > LIMITE_47358) return LIMITE_47358;
    return valor * FACTOR_47358;
}
