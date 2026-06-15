// fichero 49430 -- macros y constantes -- MODIFICADO
#define LIMITE_49430 49630
#define FACTOR_49430 2

int aplicar_limite49430(int valor) {
    if (valor > LIMITE_49430) return LIMITE_49430;
    return valor * FACTOR_49430;
}
