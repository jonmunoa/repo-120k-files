// fichero 38041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38041;

Registro38041 crear_registro38041(int id) {
    Registro38041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
