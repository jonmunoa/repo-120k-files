// fichero 30846 -- macros y constantes -- MODIFICADO
#define LIMITE_30846 31046
#define FACTOR_30846 3

int aplicar_limite30846(int valor) {
    if (valor > LIMITE_30846) return LIMITE_30846;
    return valor * FACTOR_30846;
}
