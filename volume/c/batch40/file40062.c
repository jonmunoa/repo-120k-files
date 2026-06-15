// fichero 40062 -- macros y constantes -- MODIFICADO
#define LIMITE_40062 40262
#define FACTOR_40062 4

int aplicar_limite40062(int valor) {
    if (valor > LIMITE_40062) return LIMITE_40062;
    return valor * FACTOR_40062;
}
