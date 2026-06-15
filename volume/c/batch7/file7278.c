// fichero 7278 -- macros y constantes -- MODIFICADO
#define LIMITE_7278 7478
#define FACTOR_7278 5

int aplicar_limite7278(int valor) {
    if (valor > LIMITE_7278) return LIMITE_7278;
    return valor * FACTOR_7278;
}
