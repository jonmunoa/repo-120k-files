// fichero 39814 -- macros y constantes -- MODIFICADO
#define LIMITE_39814 40014
#define FACTOR_39814 6

int aplicar_limite39814(int valor) {
    if (valor > LIMITE_39814) return LIMITE_39814;
    return valor * FACTOR_39814;
}
