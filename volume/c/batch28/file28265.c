// fichero 28265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28265;

Registro28265 crear_registro28265(int id) {
    Registro28265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
