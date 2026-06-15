// fichero 38877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38877;

Registro38877 crear_registro38877(int id) {
    Registro38877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
