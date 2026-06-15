// fichero 27446 -- macros y constantes -- MODIFICADO
#define LIMITE_27446 27646
#define FACTOR_27446 3

int aplicar_limite27446(int valor) {
    if (valor > LIMITE_27446) return LIMITE_27446;
    return valor * FACTOR_27446;
}
