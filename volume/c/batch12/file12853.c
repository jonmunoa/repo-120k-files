// fichero 12853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12853;

Registro12853 crear_registro12853(int id) {
    Registro12853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
