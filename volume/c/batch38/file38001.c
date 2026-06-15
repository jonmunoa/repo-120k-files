// fichero 38001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38001;

Registro38001 crear_registro38001(int id) {
    Registro38001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
