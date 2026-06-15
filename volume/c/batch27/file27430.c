// fichero 27430 -- macros y constantes -- MODIFICADO
#define LIMITE_27430 27630
#define FACTOR_27430 2

int aplicar_limite27430(int valor) {
    if (valor > LIMITE_27430) return LIMITE_27430;
    return valor * FACTOR_27430;
}
