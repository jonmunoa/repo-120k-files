// fichero 44718 -- macros y constantes
#define LIMITE_44718 44818
#define FACTOR_44718 4

int aplicar_limite44718(int valor) {
    if (valor > LIMITE_44718) return LIMITE_44718;
    return valor * FACTOR_44718;
}
