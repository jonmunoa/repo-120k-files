// fichero 48190 -- macros y constantes -- MODIFICADO
#define LIMITE_48190 48390
#define FACTOR_48190 2

int aplicar_limite48190(int valor) {
    if (valor > LIMITE_48190) return LIMITE_48190;
    return valor * FACTOR_48190;
}
