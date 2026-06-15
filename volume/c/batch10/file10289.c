// fichero 10289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10289;

Registro10289 crear_registro10289(int id) {
    Registro10289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
