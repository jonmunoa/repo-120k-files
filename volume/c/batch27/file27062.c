// fichero 27062 -- macros y constantes -- MODIFICADO
#define LIMITE_27062 27262
#define FACTOR_27062 4

int aplicar_limite27062(int valor) {
    if (valor > LIMITE_27062) return LIMITE_27062;
    return valor * FACTOR_27062;
}
