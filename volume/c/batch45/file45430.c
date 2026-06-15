// fichero 45430 -- macros y constantes -- MODIFICADO
#define LIMITE_45430 45630
#define FACTOR_45430 2

int aplicar_limite45430(int valor) {
    if (valor > LIMITE_45430) return LIMITE_45430;
    return valor * FACTOR_45430;
}
