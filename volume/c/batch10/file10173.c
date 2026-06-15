// fichero 10173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10173;

Registro10173 crear_registro10173(int id) {
    Registro10173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
