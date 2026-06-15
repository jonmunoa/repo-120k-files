// fichero 12765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12765;

Registro12765 crear_registro12765(int id) {
    Registro12765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
