// fichero 9290 -- macros y constantes -- MODIFICADO
#define LIMITE_9290 9490
#define FACTOR_9290 2

int aplicar_limite9290(int valor) {
    if (valor > LIMITE_9290) return LIMITE_9290;
    return valor * FACTOR_9290;
}
