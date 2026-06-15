// fichero 29906 -- macros y constantes -- MODIFICADO
#define LIMITE_29906 30106
#define FACTOR_29906 3

int aplicar_limite29906(int valor) {
    if (valor > LIMITE_29906) return LIMITE_29906;
    return valor * FACTOR_29906;
}
