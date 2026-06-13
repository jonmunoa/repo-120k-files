// fichero 44306 -- macros y constantes
#define LIMITE_44306 44406
#define FACTOR_44306 2

int aplicar_limite44306(int valor) {
    if (valor > LIMITE_44306) return LIMITE_44306;
    return valor * FACTOR_44306;
}
