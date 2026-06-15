// fichero 47001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47001;

Registro47001 crear_registro47001(int id) {
    Registro47001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
