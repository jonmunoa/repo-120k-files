// fichero 44873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44873;

Registro44873 crear_registro44873(int id) {
    Registro44873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
