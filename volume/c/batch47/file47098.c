// fichero 47098 -- macros y constantes -- MODIFICADO
#define LIMITE_47098 47298
#define FACTOR_47098 5

int aplicar_limite47098(int valor) {
    if (valor > LIMITE_47098) return LIMITE_47098;
    return valor * FACTOR_47098;
}
