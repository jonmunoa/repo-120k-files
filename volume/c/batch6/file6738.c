// fichero 6738 -- macros y constantes -- MODIFICADO
#define LIMITE_6738 6938
#define FACTOR_6738 5

int aplicar_limite6738(int valor) {
    if (valor > LIMITE_6738) return LIMITE_6738;
    return valor * FACTOR_6738;
}
