// fichero 40014 -- macros y constantes -- MODIFICADO
#define LIMITE_40014 40214
#define FACTOR_40014 6

int aplicar_limite40014(int valor) {
    if (valor > LIMITE_40014) return LIMITE_40014;
    return valor * FACTOR_40014;
}
