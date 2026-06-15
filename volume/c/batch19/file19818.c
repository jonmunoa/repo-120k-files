// fichero 19818 -- macros y constantes -- MODIFICADO
#define LIMITE_19818 20018
#define FACTOR_19818 5

int aplicar_limite19818(int valor) {
    if (valor > LIMITE_19818) return LIMITE_19818;
    return valor * FACTOR_19818;
}
