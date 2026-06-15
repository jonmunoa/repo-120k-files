// fichero 38658 -- macros y constantes -- MODIFICADO
#define LIMITE_38658 38858
#define FACTOR_38658 5

int aplicar_limite38658(int valor) {
    if (valor > LIMITE_38658) return LIMITE_38658;
    return valor * FACTOR_38658;
}
