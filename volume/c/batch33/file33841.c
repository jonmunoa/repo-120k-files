// fichero 33841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33841;

Registro33841 crear_registro33841(int id) {
    Registro33841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
