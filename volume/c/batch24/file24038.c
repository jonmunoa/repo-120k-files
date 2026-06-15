// fichero 24038 -- macros y constantes -- MODIFICADO
#define LIMITE_24038 24238
#define FACTOR_24038 5

int aplicar_limite24038(int valor) {
    if (valor > LIMITE_24038) return LIMITE_24038;
    return valor * FACTOR_24038;
}
