// fichero 12757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12757;

Registro12757 crear_registro12757(int id) {
    Registro12757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
