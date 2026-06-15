// fichero 44306 -- macros y constantes -- MODIFICADO
#define LIMITE_44306 44506
#define FACTOR_44306 3

int aplicar_limite44306(int valor) {
    if (valor > LIMITE_44306) return LIMITE_44306;
    return valor * FACTOR_44306;
}
