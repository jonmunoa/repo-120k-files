// fichero 34706 -- macros y constantes -- MODIFICADO
#define LIMITE_34706 34906
#define FACTOR_34706 3

int aplicar_limite34706(int valor) {
    if (valor > LIMITE_34706) return LIMITE_34706;
    return valor * FACTOR_34706;
}
