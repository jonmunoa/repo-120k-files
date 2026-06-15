// fichero 39873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39873;

Registro39873 crear_registro39873(int id) {
    Registro39873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
