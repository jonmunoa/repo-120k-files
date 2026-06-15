// fichero 41038 -- macros y constantes -- MODIFICADO
#define LIMITE_41038 41238
#define FACTOR_41038 5

int aplicar_limite41038(int valor) {
    if (valor > LIMITE_41038) return LIMITE_41038;
    return valor * FACTOR_41038;
}
