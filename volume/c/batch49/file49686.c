// fichero 49686 -- macros y constantes -- MODIFICADO
#define LIMITE_49686 49886
#define FACTOR_49686 3

int aplicar_limite49686(int valor) {
    if (valor > LIMITE_49686) return LIMITE_49686;
    return valor * FACTOR_49686;
}
