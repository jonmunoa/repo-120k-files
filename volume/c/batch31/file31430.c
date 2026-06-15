// fichero 31430 -- macros y constantes -- MODIFICADO
#define LIMITE_31430 31630
#define FACTOR_31430 2

int aplicar_limite31430(int valor) {
    if (valor > LIMITE_31430) return LIMITE_31430;
    return valor * FACTOR_31430;
}
