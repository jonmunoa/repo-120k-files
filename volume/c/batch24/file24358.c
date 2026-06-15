// fichero 24358 -- macros y constantes -- MODIFICADO
#define LIMITE_24358 24558
#define FACTOR_24358 5

int aplicar_limite24358(int valor) {
    if (valor > LIMITE_24358) return LIMITE_24358;
    return valor * FACTOR_24358;
}
