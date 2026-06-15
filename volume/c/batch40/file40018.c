// fichero 40018 -- macros y constantes -- MODIFICADO
#define LIMITE_40018 40218
#define FACTOR_40018 5

int aplicar_limite40018(int valor) {
    if (valor > LIMITE_40018) return LIMITE_40018;
    return valor * FACTOR_40018;
}
