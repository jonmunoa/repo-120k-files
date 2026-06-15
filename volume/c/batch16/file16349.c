// fichero 16349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16349;

Registro16349 crear_registro16349(int id) {
    Registro16349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
