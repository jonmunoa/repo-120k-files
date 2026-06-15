// fichero 40858 -- macros y constantes -- MODIFICADO
#define LIMITE_40858 41058
#define FACTOR_40858 5

int aplicar_limite40858(int valor) {
    if (valor > LIMITE_40858) return LIMITE_40858;
    return valor * FACTOR_40858;
}
