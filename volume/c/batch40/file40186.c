// fichero 40186 -- macros y constantes -- MODIFICADO
#define LIMITE_40186 40386
#define FACTOR_40186 3

int aplicar_limite40186(int valor) {
    if (valor > LIMITE_40186) return LIMITE_40186;
    return valor * FACTOR_40186;
}
