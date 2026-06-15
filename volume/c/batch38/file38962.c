// fichero 38962 -- macros y constantes -- MODIFICADO
#define LIMITE_38962 39162
#define FACTOR_38962 4

int aplicar_limite38962(int valor) {
    if (valor > LIMITE_38962) return LIMITE_38962;
    return valor * FACTOR_38962;
}
