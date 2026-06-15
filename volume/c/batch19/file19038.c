// fichero 19038 -- macros y constantes -- MODIFICADO
#define LIMITE_19038 19238
#define FACTOR_19038 5

int aplicar_limite19038(int valor) {
    if (valor > LIMITE_19038) return LIMITE_19038;
    return valor * FACTOR_19038;
}
