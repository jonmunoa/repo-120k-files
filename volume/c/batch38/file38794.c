// fichero 38794 -- macros y constantes -- MODIFICADO
#define LIMITE_38794 38994
#define FACTOR_38794 6

int aplicar_limite38794(int valor) {
    if (valor > LIMITE_38794) return LIMITE_38794;
    return valor * FACTOR_38794;
}
