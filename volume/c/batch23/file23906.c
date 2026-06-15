// fichero 23906 -- macros y constantes -- MODIFICADO
#define LIMITE_23906 24106
#define FACTOR_23906 3

int aplicar_limite23906(int valor) {
    if (valor > LIMITE_23906) return LIMITE_23906;
    return valor * FACTOR_23906;
}
