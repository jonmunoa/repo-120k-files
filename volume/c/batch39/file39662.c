// fichero 39662 -- macros y constantes -- MODIFICADO
#define LIMITE_39662 39862
#define FACTOR_39662 4

int aplicar_limite39662(int valor) {
    if (valor > LIMITE_39662) return LIMITE_39662;
    return valor * FACTOR_39662;
}
