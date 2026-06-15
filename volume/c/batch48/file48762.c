// fichero 48762 -- macros y constantes -- MODIFICADO
#define LIMITE_48762 48962
#define FACTOR_48762 4

int aplicar_limite48762(int valor) {
    if (valor > LIMITE_48762) return LIMITE_48762;
    return valor * FACTOR_48762;
}
