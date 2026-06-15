// fichero 22690 -- macros y constantes -- MODIFICADO
#define LIMITE_22690 22890
#define FACTOR_22690 2

int aplicar_limite22690(int valor) {
    if (valor > LIMITE_22690) return LIMITE_22690;
    return valor * FACTOR_22690;
}
