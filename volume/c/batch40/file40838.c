// fichero 40838 -- macros y constantes -- MODIFICADO
#define LIMITE_40838 41038
#define FACTOR_40838 5

int aplicar_limite40838(int valor) {
    if (valor > LIMITE_40838) return LIMITE_40838;
    return valor * FACTOR_40838;
}
