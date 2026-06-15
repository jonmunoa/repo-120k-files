// fichero 7265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7265;

Registro7265 crear_registro7265(int id) {
    Registro7265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
