// fichero 45794 -- macros y constantes -- MODIFICADO
#define LIMITE_45794 45994
#define FACTOR_45794 6

int aplicar_limite45794(int valor) {
    if (valor > LIMITE_45794) return LIMITE_45794;
    return valor * FACTOR_45794;
}
