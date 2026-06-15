// fichero 37802 -- macros y constantes -- MODIFICADO
#define LIMITE_37802 38002
#define FACTOR_37802 4

int aplicar_limite37802(int valor) {
    if (valor > LIMITE_37802) return LIMITE_37802;
    return valor * FACTOR_37802;
}
