// fichero 38341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38341;

Registro38341 crear_registro38341(int id) {
    Registro38341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
