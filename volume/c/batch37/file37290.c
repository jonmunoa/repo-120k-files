// fichero 37290 -- macros y constantes -- MODIFICADO
#define LIMITE_37290 37490
#define FACTOR_37290 2

int aplicar_limite37290(int valor) {
    if (valor > LIMITE_37290) return LIMITE_37290;
    return valor * FACTOR_37290;
}
