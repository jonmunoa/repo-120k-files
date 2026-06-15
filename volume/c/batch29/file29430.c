// fichero 29430 -- macros y constantes -- MODIFICADO
#define LIMITE_29430 29630
#define FACTOR_29430 2

int aplicar_limite29430(int valor) {
    if (valor > LIMITE_29430) return LIMITE_29430;
    return valor * FACTOR_29430;
}
