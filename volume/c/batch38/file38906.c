// fichero 38906 -- macros y constantes -- MODIFICADO
#define LIMITE_38906 39106
#define FACTOR_38906 3

int aplicar_limite38906(int valor) {
    if (valor > LIMITE_38906) return LIMITE_38906;
    return valor * FACTOR_38906;
}
