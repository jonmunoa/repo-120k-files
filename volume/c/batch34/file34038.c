// fichero 34038 -- macros y constantes -- MODIFICADO
#define LIMITE_34038 34238
#define FACTOR_34038 5

int aplicar_limite34038(int valor) {
    if (valor > LIMITE_34038) return LIMITE_34038;
    return valor * FACTOR_34038;
}
