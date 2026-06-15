// fichero 49857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49857;

Registro49857 crear_registro49857(int id) {
    Registro49857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
