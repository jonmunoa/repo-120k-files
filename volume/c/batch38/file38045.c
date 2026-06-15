// fichero 38045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38045;

Registro38045 crear_registro38045(int id) {
    Registro38045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
