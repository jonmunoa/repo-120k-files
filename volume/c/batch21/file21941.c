// fichero 21941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21941;

Registro21941 crear_registro21941(int id) {
    Registro21941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
