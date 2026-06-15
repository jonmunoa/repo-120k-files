// fichero 25610 -- macros y constantes -- MODIFICADO
#define LIMITE_25610 25810
#define FACTOR_25610 2

int aplicar_limite25610(int valor) {
    if (valor > LIMITE_25610) return LIMITE_25610;
    return valor * FACTOR_25610;
}
