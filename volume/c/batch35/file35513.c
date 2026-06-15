// fichero 35513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35513;

Registro35513 crear_registro35513(int id) {
    Registro35513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
