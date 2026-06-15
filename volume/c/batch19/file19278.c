// fichero 19278 -- macros y constantes -- MODIFICADO
#define LIMITE_19278 19478
#define FACTOR_19278 5

int aplicar_limite19278(int valor) {
    if (valor > LIMITE_19278) return LIMITE_19278;
    return valor * FACTOR_19278;
}
