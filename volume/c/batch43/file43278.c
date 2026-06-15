// fichero 43278 -- macros y constantes -- MODIFICADO
#define LIMITE_43278 43478
#define FACTOR_43278 5

int aplicar_limite43278(int valor) {
    if (valor > LIMITE_43278) return LIMITE_43278;
    return valor * FACTOR_43278;
}
