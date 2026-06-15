// fichero 40198 -- macros y constantes -- MODIFICADO
#define LIMITE_40198 40398
#define FACTOR_40198 5

int aplicar_limite40198(int valor) {
    if (valor > LIMITE_40198) return LIMITE_40198;
    return valor * FACTOR_40198;
}
