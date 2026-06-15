// fichero 12557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12557;

Registro12557 crear_registro12557(int id) {
    Registro12557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
