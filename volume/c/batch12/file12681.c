// fichero 12681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12681;

Registro12681 crear_registro12681(int id) {
    Registro12681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
