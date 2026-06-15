// fichero 32594 -- macros y constantes -- MODIFICADO
#define LIMITE_32594 32794
#define FACTOR_32594 6

int aplicar_limite32594(int valor) {
    if (valor > LIMITE_32594) return LIMITE_32594;
    return valor * FACTOR_32594;
}
