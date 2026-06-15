// fichero 24950 -- macros y constantes -- MODIFICADO
#define LIMITE_24950 25150
#define FACTOR_24950 2

int aplicar_limite24950(int valor) {
    if (valor > LIMITE_24950) return LIMITE_24950;
    return valor * FACTOR_24950;
}
