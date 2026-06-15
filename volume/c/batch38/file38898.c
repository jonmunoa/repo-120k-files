// fichero 38898 -- macros y constantes -- MODIFICADO
#define LIMITE_38898 39098
#define FACTOR_38898 5

int aplicar_limite38898(int valor) {
    if (valor > LIMITE_38898) return LIMITE_38898;
    return valor * FACTOR_38898;
}
