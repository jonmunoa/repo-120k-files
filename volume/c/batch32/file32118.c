// fichero 32118 -- macros y constantes -- MODIFICADO
#define LIMITE_32118 32318
#define FACTOR_32118 5

int aplicar_limite32118(int valor) {
    if (valor > LIMITE_32118) return LIMITE_32118;
    return valor * FACTOR_32118;
}
