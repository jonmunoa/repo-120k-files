// fichero 19290 -- macros y constantes -- MODIFICADO
#define LIMITE_19290 19490
#define FACTOR_19290 2

int aplicar_limite19290(int valor) {
    if (valor > LIMITE_19290) return LIMITE_19290;
    return valor * FACTOR_19290;
}
