// fichero 37610 -- macros y constantes -- MODIFICADO
#define LIMITE_37610 37810
#define FACTOR_37610 2

int aplicar_limite37610(int valor) {
    if (valor > LIMITE_37610) return LIMITE_37610;
    return valor * FACTOR_37610;
}
