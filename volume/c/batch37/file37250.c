// fichero 37250 -- macros y constantes -- MODIFICADO
#define LIMITE_37250 37450
#define FACTOR_37250 2

int aplicar_limite37250(int valor) {
    if (valor > LIMITE_37250) return LIMITE_37250;
    return valor * FACTOR_37250;
}
