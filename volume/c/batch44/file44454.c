// fichero 44454 -- macros y constantes -- MODIFICADO
#define LIMITE_44454 44654
#define FACTOR_44454 6

int aplicar_limite44454(int valor) {
    if (valor > LIMITE_44454) return LIMITE_44454;
    return valor * FACTOR_44454;
}
