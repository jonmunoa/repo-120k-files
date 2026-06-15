// fichero 26265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26265;

Registro26265 crear_registro26265(int id) {
    Registro26265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
