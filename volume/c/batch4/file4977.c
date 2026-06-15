// fichero 4977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4977;

Registro4977 crear_registro4977(int id) {
    Registro4977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
