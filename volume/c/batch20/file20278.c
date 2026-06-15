// fichero 20278 -- macros y constantes -- MODIFICADO
#define LIMITE_20278 20478
#define FACTOR_20278 5

int aplicar_limite20278(int valor) {
    if (valor > LIMITE_20278) return LIMITE_20278;
    return valor * FACTOR_20278;
}
