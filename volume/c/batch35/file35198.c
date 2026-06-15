// fichero 35198 -- macros y constantes -- MODIFICADO
#define LIMITE_35198 35398
#define FACTOR_35198 5

int aplicar_limite35198(int valor) {
    if (valor > LIMITE_35198) return LIMITE_35198;
    return valor * FACTOR_35198;
}
