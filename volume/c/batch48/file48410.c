// fichero 48410 -- macros y constantes -- MODIFICADO
#define LIMITE_48410 48610
#define FACTOR_48410 2

int aplicar_limite48410(int valor) {
    if (valor > LIMITE_48410) return LIMITE_48410;
    return valor * FACTOR_48410;
}
