// fichero 40970 -- macros y constantes -- MODIFICADO
#define LIMITE_40970 41170
#define FACTOR_40970 2

int aplicar_limite40970(int valor) {
    if (valor > LIMITE_40970) return LIMITE_40970;
    return valor * FACTOR_40970;
}
