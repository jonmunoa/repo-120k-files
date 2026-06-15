// fichero 3846 -- macros y constantes -- MODIFICADO
#define LIMITE_3846 4046
#define FACTOR_3846 3

int aplicar_limite3846(int valor) {
    if (valor > LIMITE_3846) return LIMITE_3846;
    return valor * FACTOR_3846;
}
