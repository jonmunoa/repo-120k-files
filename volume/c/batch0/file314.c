// fichero 314 -- macros y constantes -- MODIFICADO
#define LIMITE_314 514
#define FACTOR_314 6

int aplicar_limite314(int valor) {
    if (valor > LIMITE_314) return LIMITE_314;
    return valor * FACTOR_314;
}
