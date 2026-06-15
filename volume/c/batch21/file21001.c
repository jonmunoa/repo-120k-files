// fichero 21001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21001;

Registro21001 crear_registro21001(int id) {
    Registro21001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
