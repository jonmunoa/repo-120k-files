// fichero 37430 -- macros y constantes -- MODIFICADO
#define LIMITE_37430 37630
#define FACTOR_37430 2

int aplicar_limite37430(int valor) {
    if (valor > LIMITE_37430) return LIMITE_37430;
    return valor * FACTOR_37430;
}
