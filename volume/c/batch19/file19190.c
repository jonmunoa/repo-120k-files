// fichero 19190 -- macros y constantes -- MODIFICADO
#define LIMITE_19190 19390
#define FACTOR_19190 2

int aplicar_limite19190(int valor) {
    if (valor > LIMITE_19190) return LIMITE_19190;
    return valor * FACTOR_19190;
}
