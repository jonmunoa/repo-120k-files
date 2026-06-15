// fichero 13290 -- macros y constantes -- MODIFICADO
#define LIMITE_13290 13490
#define FACTOR_13290 2

int aplicar_limite13290(int valor) {
    if (valor > LIMITE_13290) return LIMITE_13290;
    return valor * FACTOR_13290;
}
