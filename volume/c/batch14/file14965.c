// fichero 14965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14965;

Registro14965 crear_registro14965(int id) {
    Registro14965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
