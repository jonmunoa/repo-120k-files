// fichero 3706 -- macros y constantes -- MODIFICADO
#define LIMITE_3706 3906
#define FACTOR_3706 3

int aplicar_limite3706(int valor) {
    if (valor > LIMITE_3706) return LIMITE_3706;
    return valor * FACTOR_3706;
}
