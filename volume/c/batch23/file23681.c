// fichero 23681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23681;

Registro23681 crear_registro23681(int id) {
    Registro23681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
