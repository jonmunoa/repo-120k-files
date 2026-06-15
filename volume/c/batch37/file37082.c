// fichero 37082 -- macros y constantes -- MODIFICADO
#define LIMITE_37082 37282
#define FACTOR_37082 4

int aplicar_limite37082(int valor) {
    if (valor > LIMITE_37082) return LIMITE_37082;
    return valor * FACTOR_37082;
}
