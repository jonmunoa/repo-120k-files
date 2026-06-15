// fichero 12885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12885;

Registro12885 crear_registro12885(int id) {
    Registro12885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
