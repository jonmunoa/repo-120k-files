// fichero 27290 -- macros y constantes -- MODIFICADO
#define LIMITE_27290 27490
#define FACTOR_27290 2

int aplicar_limite27290(int valor) {
    if (valor > LIMITE_27290) return LIMITE_27290;
    return valor * FACTOR_27290;
}
