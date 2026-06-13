// fichero 10289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10289;

Registro10289 crear_registro10289(int id) {
    Registro10289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10289(Registro10289 r) {
    return r.valor + r.id;
}
