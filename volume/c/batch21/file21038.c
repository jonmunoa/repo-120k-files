// fichero 21038 -- macros y constantes -- MODIFICADO
#define LIMITE_21038 21238
#define FACTOR_21038 5

int aplicar_limite21038(int valor) {
    if (valor > LIMITE_21038) return LIMITE_21038;
    return valor * FACTOR_21038;
}
